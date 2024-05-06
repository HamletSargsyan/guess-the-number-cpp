#ifndef GAME_H
#define GAME_H

class Game {
    public:
        void start();
        void guess(int number);
        int run();

    private:
        int secretNumber;
        bool gameOver = false;
        int attempts;
        int maxAttempts = 10;
};

#endif
