project(Hello_world)

cmake_minimum_required(VERSION 2.8) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

add_executable(hello_world hello_world.cpp det.h det.cpp first_root.h first_root.cpp second_root.h second_root.cpp)		# Создает исполняемый файл с именем main
									# из исходника main.cpp