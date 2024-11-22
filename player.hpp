#include <string>
#pragma once
class Player{
    private:
        std::string playerType;
        int rounds = 0;
    public:
        Player(std::string newPlayerType);
        std::string getPlayerType();
        int getRounds();
        int getMove();
};