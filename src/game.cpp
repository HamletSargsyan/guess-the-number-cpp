#include <iostream>
#include <cstdlib>
#include "game.h"

// Реализация метода start() класса Game
void Game::start() {
    // Генерируем случайное число от 1 до 100
    secretNumber = rand() % 100 + 1;
    std::cout << "Добро пожаловать в игру 'Угадай число'!\n";
    std::cout << "Я загадал число от 1 до 100. Попробуй угадать!\n";
}

// Реализация метода guess() класса Game
void Game::guess(int number) {
    if (number == secretNumber) {
        std::cout << "Поздравляю! Вы угадали число " << secretNumber << "!\n";
        gameOver = true;
    } else if (number < secretNumber) {
        std::cout << "Не угадал. Мое число больше.\n";
    } else {
        std::cout << "Не угадал. Мое число меньше.\n";
    }
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
}
