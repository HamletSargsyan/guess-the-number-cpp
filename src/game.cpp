#include <iostream>
#include "game.h"
#include "termcolor/termcolor.hpp"
#include "GRand/grand.h"


// Реализация метода start() класса Game
void Game::start() {
    // Генерируем случайное число от 1 до 100
    GRand rand;
    secretNumber = rand.i(100);
    std::cout << termcolor::green << "Добро пожаловать в игру 'Угадай число'!" << std::endl;
    std::cout << termcolor::blue << "Я загадал число от 1 до 100. Попробуй угадать!" << termcolor::reset << std::endl;
}

// Реализация метода guess() класса Game
void Game::guess(int number) {
    if (number == secretNumber) {
        std::cout << termcolor::green << "Поздравляю! Вы угадали число " << secretNumber << "!";
        gameOver = true;
    } else if (number < secretNumber) {
        std::cout << termcolor::red << "Не угадал. Мое число больше.";
    } else {
        std::cout << termcolor::red << "Не угадал. Мое число меньше.";
    }

    std::cout << termcolor::reset << std::endl;
}

// Реализация метода run() класса Game
void Game::run() {
    start();
    while (!gameOver) {
        int guessNumber;
        std::cout << "Введите ваше предположение: ";
        std::cin >> guessNumber;
        guess(guessNumber);
    }

    std::cout << std::endl;
    std::cout << termcolor::magenta << "Разработчик: https://www.github.com/HamletSargsyan" << std::endl;
    std::cout << "Репозиторий игры: https://www.github.com/HamletSargsyan/guess-the-number-cpp" << termcolor::reset << std::endl;
}
