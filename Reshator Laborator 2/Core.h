#pragma once
#ifndef CORE_H
#define CORE_H
#define _USE_MATH_DEFINES
#include "json.hpp"
using json = nlohmann::json;

extern json Settings;
extern std::map<std::string, std::string> settings_names;
extern std::string lab_names[7];
extern std::vector<std::string> lab_tasks[7];
extern std::string SettingsPath;
extern std::string ExePath;
extern std::string WinState;
extern int Lab;
extern int Task;
extern bool CustomFunc;

namespace std {
	inline std::string to_string(System::String^);
}
void settings_reset();
void settings_import();
void settings_export();
extern std::string f_decl;
double custom_f(double);
System::String^ lab_manager();

#endif