#ifndef GAME_H
#define GAME_H

class Game {
    public:
        void start();
        void guess(int number);
        void run();

    private:
        int secretNumber;
        bool gameOver = false;
};

#endif
