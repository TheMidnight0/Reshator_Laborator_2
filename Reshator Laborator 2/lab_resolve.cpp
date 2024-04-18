#include "Core.h"
#include <math.h>
#include <map>
#include <set>

std::string f_decl = "";
bool CustomFunc = false;

static double simpson(double a, double b, int n, std::function<double(double)> f) {
    // Ширина подинтегралов
	const double step_width = (b - a) / n;
	double integral = 0;
    // Вычисляем по формуле Симпсона значение каждого подинтеграла
    for (int step = 0; step < n; step++) {
		double x1 = a + step * step_width;
		double x2 = x1 + step_width;
		integral += ((x2 - x1) / 6) * (f(x1) + 4 * f((x1 + x2) / 2) + f(x2));
	}

	return integral;
}

static std::tuple<double, int, bool> adaptive_simpson(double a, double b, double e, std::function<double(double)> f) {
    double x1 = a, x2 = b;
    double S = 0;
    int splits = 0;
    for (int n = 0; e > 0 && n < 10000; n++) {
        double integral1 = simpson(x1, x2, 2, f);
        double integral2 = simpson(x1, x2, 4, f);
        if (fabs(integral2 - integral1) / 15 < e) {
            S += integral2;
            if (x2 == b) {
                return std::make_tuple(S, splits, false);
            }
            else {
                double step = x2 - x1;
                x1 += step;
                x2 += step * 2;
                if (x2 > b) {
                    x2 = b;
                }
            }
        }
        else {
            x2 = x1 + (x2 - x1) / 2;
            splits++;
        }
    }
    return std::make_tuple(0, 0, true);
}

static double monte_karlo(double a, double b, int n, std::function<double(double)> f) {
    // Ограничения функции снизу и сверху. Для данной функции вычисляется следующим образом:
    double c = 0, d = 1;
    // Координаты случайной точки
    double x, y;
    int count = 0;
    // Поочередно генерируем точки и проверяем, попадают ли они под график
    for (int i = 0; i < n; i++) {
        x = a + double(rand()) / RAND_MAX * (b - a);
        y = c + double(rand()) / RAND_MAX * (d - c);
        if (y <= f(x)) {
            if (y >= 0) {
                count++;
            }
            else {
                count--;
            }
        }
    }
    // Формула вычисления интеграла
    double intergal = double(count) / double(n) * (b - a) * (d - c);
    return intergal;
}

static System::String^ gauss_jordan(std::vector<std::vector<double>> A, std::vector<double> b) {
    // Карта проверенных переменных по принципу <row, col>
    std::map<int, int> cleared_vars;
    // Решение матрицы
    for (int col = 0; col < A[0].size(); col++) {
        double min = A[0][col];
        int index = -1;
        // Выбор ведущего элемента (строки) столбца. Ведущим элементом становится меньший по модулю среди остальных
        for (int row = 0; row < A.size(); row++) {
            if ((abs(min) > abs(A[row][col]) || index == -1) && cleared_vars.find(row) == cleared_vars.end()) {
                min = A[row][col];
                index = row;
            }
        }
        // Если ведущий элемент не удалось найти - пропускаем столбец
        if (index == -1) {
            continue;
        }
        // Приводим ведущий элемент к 1. Строка изменяется соответственно
        for (int col2 = 0; col2 < A[0].size(); col2++) {
            A[index][col2] /= min;
        }
        b[index] /= min;
        // Обнуляем другие числа в столбце. Строки изменяются соответственно
        for (int row = 0; row < A.size(); row++) {
            if (row == index) {
                continue;
            }
            double divider = -A[row][col];
            for (int col2 = 0; col2 < A[0].size(); col2++) {
                A[row][col2] += A[index][col2] * divider;
            }
            b[row] += b[index] * divider;
        }
        cleared_vars[index] = col;
    }

    std::multimap<int, int> sorted_vars;
    for (const auto& pair : cleared_vars) {
        sorted_vars.insert(std::make_pair(pair.second, pair.first));
    }
    // Составление ответа
    System::String^ answer;
    for each (std::pair<int, int> var in sorted_vars) {
        answer += "x" + (var.first + 1) + " = " + System::String::Format("{0:F3}", b[var.second]);
        for (int col2 = 0; col2 < A[0].size(); col2++) {
            if (col2 == var.first) {
                continue;
            }
            if (A[var.second][col2] != 0) {
                if (A[var.second][col2] > 0) {
                    answer += " + " + System::String::Format("{0:F3}", A[var.second][col2]) + " * x" + (col2 + 1);
                }
                else {
                    answer += " - " + System::String::Format("{0:F3}", abs(A[var.second][col2])) + " * x" + (col2 + 1);
                }
            }
        }
        // Переход на следующую строку
        answer += "\r\n";
    }
    return answer;
}

static int seidel(std::vector<std::vector<double>> A, std::vector<double> b, std::vector<double>& xk, int n, double eps) {
    // x(k + 1)
    std::vector<double> x_new(n);
    int iteration = 0;
    bool converge = false;

    while (!converge && iteration < 10000) {
        iteration++;
        // Проходимся по каждой строке матрицы
        for (int i = 0; i < n; ++i) {
            x_new[i] = xk[i];
            double var = 0;

            for (int j = 0; j < i; ++j) {
                var += A[i][j] * x_new[j];
            }
            for (int j = i + 1; j < n; ++j) {
                var += A[i][j] * xk[j];
            }

            // По формуле вычисляем вектор x
            x_new[i] = (b[i] - var) / A[i][i];
        }

        // Если разница между x[i] и xk[i] больше погрешности - повторяем алгоритм
        converge = true;
        for (int i = 0; i < n; ++i) {
            if (abs(x_new[i] - xk[i]) > eps) {
                converge = false;
                break;
            }
        }

        // Коэффициенты обновляются
        xk = x_new;
    }
    return iteration;
}

static System::String^ lab_1(std::function<double(double)> f = [&](double x)->double {return pow(sin(x), 0.4) * sin(0.4 * x); }) {
	const double a = 0, b = 3, e = 10E-5;
	if (Task == 1) {
		double value_old, value_new;
		int n = 1;

		value_new = simpson(a, b, n, f);
		do {
			value_old = value_new;
			n *= 2;
			value_new = simpson(a, b, n, f);
			// Правило Рунге: |I(h) - I(h2)| / 15 < e
		} while (fabs(value_new - value_old) / 15 >= e && n <= 16384);
        
        if (fabs(value_new - value_old) / 15 >= e) {
            return "Не удалось вычислить значение интеграла с заданной точностью.\r\nФактическая погрешность: " + 
                (fabs(value_new - value_old) / 15) + "\r\nЧисло разбиений: " + n + "\r\nРезультат: " + value_new;
        }
        else {
            return "Фактическая погрешность: " + (fabs(value_new - value_old) / 15) + 
                "\r\nЧисло разбиений: " + n + "\r\nРезультат: " + value_new;
        }
	}
	if (Task == 2) {
        int n = 5000;
        double average, variance;
        do {
            n *= 2;
            srand(unsigned(time(NULL)));
            double value1 = monte_karlo(a, b, n, f);
            double value2 = monte_karlo(a, b, n, f);
            double value3 = monte_karlo(a, b, n, f);

            // Стандартное отклонение средних по 3 значениям           
            average = (value1 + value2 + value3) / 3;
            variance = pow(value1 - average, 2) + pow(value2 - average, 2) + pow(value3 - average, 2);

            variance /= 2;
        } while (variance >= e && n <= 1280000);

        // Возвращает среднее арифметическое
        if (variance >= e) {
            return "Не удалось вычислить значение интеграла с заданной точностью.\r\nПогрешность: " +
                variance + "\r\nКоличество точек: " + n + "\r\nРезультат: " + average;
        }
        else {
            return "Погрешность: " + variance +
                "\r\nКоличество точек: " + n + "\r\nРезультат: " + average;
        }
	}
    if (Task == 3) {
        auto [S, splits, error] = adaptive_simpson(a, b, e, f);
        if (!error) {
            return "Число разбиений: " + splits + "\r\nРезультат: " + S;
        }
        else {
            return "Случилась непредвиденная ошибка во время выполнения задачи.";
        }
    }
	return "";
}

static System::String^ lab_2() {
    std::vector<std::vector<double>> A = { {2, 0, -1}, {-1, 3, -1}, {10, -1, 4} };
    std::vector<double> b = {-3, 2, 3};
    if (Task == 1) {
        return "Ответ:\r\n" + gauss_jordan(A, b);
    }
    if (Task == 2) {
        std::vector<double> xk(A.size(), 0);
        double e = 10E-5;
        int iteration = seidel(A, b, xk, int(A.size()), e);
        System::String^ answer = "Ответ:\r\n";
        for (int i = 0; i < xk.size(); i++) {
            answer += "x" + (i + 1) + " = " + System::String::Format("{0:F3}", xk[i]) + "\r\n";
        }
        return answer + "\r\n" + iteration;
    }
    return "";
}

static System::String^ lab_3() {
    return "";
}

static System::String^ lab_4(std::function<double(double)> f = [&](double x)->double {return 0; }) {
    return "";
}

static System::String^ lab_5(std::function<double(double)> f = [&](double x)->double {return 0; }) {
    return "";
}

static System::String^ lab_6(std::function<double(double)> f = [&](double x)->double {return 0; }) {
    return "";
}

static System::String^ lab_7() {
    return "";
}

static std::vector<std::string> to_postfix(std::string line) {
    std::vector<std::string> stek;
    std::vector<std::string> result;
    std::string out;
    std::map<std::string, int> actions = { {"+", 1}, {"-", 1}, {"*", 2}, {"/", 2 }, {"^", 3}, {"sqrt", 4}, {"abs", 4},
        {"sin", 4}, {"arcsin", 4}, {"cos", 4}, {"arccos", 4}, {"tg", 4}, {"arctg", 4}, {"ctg", 4}, {"arcctg", 4}, {"log", 4} };
    std::string word;
    bool is_number = false;
    for each (char elem in line) {
        word += elem;
        if (word == "(") {
            stek.push_back(word);
            word = "";
            is_number = false;
        }
        if (actions.find(word) != actions.end()) {
            while (stek.size() > 0 && (actions[stek[stek.size() - 1]] >= actions[word])) {
                result.push_back(stek[stek.size() - 1]);
                stek.pop_back();
            }
            stek.push_back(word);
            word = "";
            is_number = false;
        }
        if (word == ")") {
            while (stek.size() > 0 && stek[stek.size() - 1] != "(") {
                result.push_back(stek[stek.size() - 1]);
                stek.pop_back();
            }
            if (stek.size() > 0 && stek[stek.size() - 1] == "(") {
                stek.pop_back();
            }
            if (stek.size() > 0 && actions[stek[stek.size() - 1]] == 4) {
                result.push_back(stek[stek.size() - 1]);
                stek.pop_back();
            }
            word = "";
            is_number = false;
        }
        if (std::isdigit(elem)) {
            if (is_number) {
                result[result.size() - 1] += word;
            }
            else {
                result.push_back(word);
                is_number = true;
            }
            word = "";
        }
        if (word == "." || word == ",") {
            if (is_number) {
                result[result.size() - 1] += ".";
            }
            else {
                result.push_back(".");
            }
            word = "";
        }
        if (word == "x" || word == "e") {
            result.push_back(word);
            word = "";
        }
        if (elem == ' ') {
            word.pop_back();
        }
    }
    for (int i = int(stek.size()) - 1; i > -1; i--) {
        result.push_back(stek[i]);
        stek.pop_back();
    }
    return result;
}

double custom_f(double x) {
    static std::string func_decl;
    static std::vector<std::string> function;
    if (func_decl != f_decl) {
        func_decl = f_decl;
        function = to_postfix(func_decl);
    }
    std::vector<std::string> actions = function;
    for (size_t i = 0; i < actions.size(); i++) {
        if (actions[i] == "x") {
            actions[i] = std::to_string(x);
        }
        if (actions[i] == "e") {
            actions[i] = std::to_string(M_E);
        }
    }
    for (size_t i = 0; i < actions.size(); i++) {
        if (actions[i] == "+") {
            actions[i - 2] = std::to_string(std::stod(actions[i - 2]) + std::stod(actions[i - 1]));
            actions.erase(std::next(actions.begin(), i));
            actions.erase(std::next(actions.begin(), i - 1));
            i -= 2;
            continue;
        }
        if (actions[i] == "-") {
            actions[i - 2] = std::to_string(std::stod(actions[i - 2]) - std::stod(actions[i - 1]));
            actions.erase(std::next(actions.begin(), i));
            actions.erase(std::next(actions.begin(), i - 1));
            i -= 2;
            continue;
        }
        if (actions[i] == "*") {
            actions[i - 2] = std::to_string(std::stod(actions[i - 2]) * std::stod(actions[i - 1]));
            actions.erase(std::next(actions.begin(), i));
            actions.erase(std::next(actions.begin(), i - 1));
            i -= 2;
            continue;
        }
        if (actions[i] == "/") {
            actions[i - 2] = std::to_string(std::stod(actions[i - 2]) / std::stod(actions[i - 1]));
            actions.erase(std::next(actions.begin(), i));
            actions.erase(std::next(actions.begin(), i - 1));
            i -= 2;
            continue;
        }
        if (actions[i] == "^") {
            actions[i - 2] = std::to_string(pow(std::stod(actions[i - 2]), std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            actions.erase(std::next(actions.begin(), i - 1));
            i -= 2;
            continue;
        }
        if (actions[i] == "sqrt") {
            actions[i - 1] = std::to_string(sqrt(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "abs") {
            actions[i - 1] = std::to_string(abs(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "ln") {
            actions[i - 1] = std::to_string(log(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "sin") {
            actions[i - 1] = std::to_string(sin(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "arcsin") {
            actions[i - 1] = std::to_string(asin(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "cos") {
            actions[i - 1] = std::to_string(cos(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "arccos") {
            actions[i - 1] = std::to_string(acos(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "tg") {
            actions[i - 1] = std::to_string(tan(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "arctg") {
            actions[i - 1] = std::to_string(atan(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "ctg") {
            actions[i - 1] = std::to_string(1 / tan(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
        if (actions[i] == "arcctg") {
            actions[i - 1] = std::to_string(M_PI / 2 - atan(std::stod(actions[i - 1])));
            actions.erase(std::next(actions.begin(), i));
            i--;
            continue;
        }
    }
    if (actions.size() > 1) {
        return std::stod("error");
    }
    if (actions.size() > 0) {
        return std::stod(actions[0]);
    }
    else {
        return 0;
    }
}

System::String^ lab_manager() {
    try {
        if (Lab == 1) {
            if (CustomFunc) {
                return "y = " + gcnew System::String(f_decl.data()) + "\r\n" + lab_1(custom_f);
            }
            else {
                return lab_1();
            }
        }
        if (Lab == 2) {
            return lab_2();
        }
        if (Lab == 3) {
            return lab_3();
        }
        if (Lab == 4) {
            if (CustomFunc) {
                return "y = " + gcnew System::String(f_decl.data()) + "\r\n" + lab_4(custom_f);
            }
            else {
                return lab_4();
            }
        }
        if (Lab == 5) {
            if (CustomFunc) {
                return "y = " + gcnew System::String(f_decl.data()) + "\r\n" + lab_5(custom_f);
            }
            else {
                return lab_5();
            }
        }
        if (Lab == 6) {
            if (CustomFunc) {
                return "y = " + gcnew System::String(f_decl.data()) + "\r\n" + lab_6(custom_f);
            }
            else {
                return lab_6();
            }
        }
        if (Lab == 7) {
            return lab_7();
        }
    }
    catch (...) {
        if (CustomFunc) {
            return "Произошла ошибка во время выполнения задачи. Пожалуйста, проверьте написание своей функции и попробуйте еще раз.";
        }
        else {
            return "Произошла непредвиденная ошибка.";
        }
    }
	return "";
}