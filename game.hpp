#include <vector>
#include <string>

#pragma once

class Game{
    private:
    int rounds = 0;
    public: 
    std::vector <std::vector <std::string>>board {{" "," "," "},
                                                  {" "," "," "},
                                                  {" "," "," "}};
    void displayBoard();
    void addRound();
    int getRounds();
    bool checkWin(std::string playertype);
    bool checkDraw();
    bool setMark(std::string playertype, int markplace);
};
