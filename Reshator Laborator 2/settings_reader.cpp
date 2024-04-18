#include "Core.h"
#include <fstream>
#include <filesystem>
#include "MainWindow.h"
namespace fs = std::filesystem;

json Settings;
std::map<std::string, std::string> settings_names = { {"intro", "Заставка"}, {"buttons_animation", "Анимации кнопок"}, {"flowey", "ТВОЙ ЛУЧШИЙ ДРУГ"}};

void settings_reset() {
	Settings["intro"] = true;
	Settings["buttons_animation"] = false;
	Settings["flowey"] = true;
}

void settings_export() {
	if (!fs::exists(SettingsPath)) {
		fs::create_directory(SettingsPath);
	}
	std::ofstream file(SettingsPath + "settings.json");
	if (file.is_open()) {
		file << Settings;
		file.close();
	}
}

void settings_import() {
	std::ifstream file(SettingsPath + "settings.json");
	if (file.is_open()) {
		json js_file;
		file >> js_file;
		bool error = false;
		for (const auto& [key, value] : Settings.items()) {
			if (js_file[key] == nullptr) {
				error = true;
				break;
			}
			else {
				Settings[key] = js_file[key];
			}
		}
		if (error) {
			settings_export();
		}
		file.close();
	}
	else {
		settings_export();
	}
}