#include "MainWindow.h"
#include "Core.h"
#include <direct.h>
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

std::string lab_names[7] = {"ЧИСЛЕННОЕ ИНТЕГРИРОВАНИЕ", "ЛИНЕЙНЫХ АЛГЕБРАИЧЕСКИХ УРАВНЕНИЙ (СЛАУ)", 
"РЕШЕНИЕ НЕЛИНЕЙНЫХ УРАВНЕНИЙ И СИСТЕМ (СНАУ)", "ИНТЕРПОЛЯЦИЯ И АППРОКСИМАЦИЯ", "АППРОКСИМАЦИЯ ТРИГОНОМЕТРИЧЕСКИМИ ФУНКЦИЯМИ.\nРЯДЫ ФУРЬЕ", 
"МНОГОМЕРНАЯ ОПТИМИЗАЦИЯ НЕПРЕРЫВНЫХ ФУНКЦИЙ", "МНОГОМЕРНАЯ ДИСКРЕТНАЯ ОПТИМИЗАЦИЯ"};
std::vector<std::string> lab_tasks[7] = { 
    {"Метод Симпсона\nс контролем погрешности\nпо формуле Рунге", "Метод Монте-Карло", 
    "Адаптивный метод с\nиспользованием метода\nСимпсона"},
    {"Метод Гаусса-Жордана\nс выбором ведущего\nэлемента", "Итерационный метод\nЗейделя"/*, 
    "Метод сопряженных\nнаправлений", "Метод регуляризации\nТихонова\nдля решения плохо -\nобусловленных СЛАУ"*/},
    {/*"Методы дихотомии +\nНьютона, или золотое\nсечение + Ньютона, или\nсекущих", "Решение СНАУ методом\nНьютона-Рафсона", 
    "Решение нелинейной\nсистемы из 6 уравнений\nс 6 неизвестными", "Обратная квадратичная\nинтерполяция для поиска\nминимума функции"*/},
    {/*"Реализация полинома\nЛагранжа", "Кубический сплайн", "Сплайн Эрмита", "Кривые Безье", "Устойчивый алгоритм\nчисленного\nдифференцирования"*/},
    {/*"Разложение в ряд Фурье", "Быстрое преобразование Фурье"*/},
    {/*"Задача линейного\nпрограммирования", "Минимизация нелинейных\nфункционалов\nбез ограничений", 
    "Метод минимизации\nвторого порядка"*/},
    {/*"Задача коммивояжера, или\nзадача о рюкзаке, или\nзадача о расписании", 
    "Методы ветвей и границ, или\nмуравьиный алгоритм, или\nжадный алгоритм, или\nметод перебора", "Генетический алгоритм"*/}};
std::vector<std::string> lab_inputs[7] = {
    {"func", "func", "func"}, 
    {"matrix", "matrix"}, 
    {"equation", "system of equations"}
};
std::string SettingsPath;
std::string ExePath;
std::string WinState;
int Lab;
int Task;

std::string std::to_string(System::String^ text) {
    using namespace Runtime::InteropServices;
    const char* chars =
        (const char*)(Marshal::StringToHGlobalAnsi(text)).ToPointer();
    std::string new_str = chars;
    Marshal::FreeHGlobal(IntPtr((void*)chars));
    return new_str;
}

void main() {
    char tmp[FILENAME_MAX];
    std::ignore = _getcwd(tmp, FILENAME_MAX);
    ExePath = tmp;
    char* buffer;
    _dupenv_s(&buffer, 0, "APPDATA");
    if (buffer != nullptr) {
        SettingsPath = (std::string)buffer + "\\Reshator Laborator\\";
    }
    settings_reset();
    settings_import();
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ReshatorLaborator2::MainWindow form;
    Application::Run(% form);
}