#include <string>

class Player{
    private:
        std::string playerType;
        int rounds = 0;
    public:
        Player(std::string newPlayerType);
        std::string choice();
        int getRounds();
        int getMove();
};