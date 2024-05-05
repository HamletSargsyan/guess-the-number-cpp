cmake_minimum_required(VERSION 3.10)
project(guess-the-number-game)

# Устанавливаем стандарт языка C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавляем исполняемый файл main.cpp
add_executable(guess-the-number-game src/main.cpp src/game.cpp)

# Указываем директорию с заголовочными файлами
target_include_directories(guess-the-number-game PUBLIC include)
