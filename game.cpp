#include "game.hpp"
#include <iostream>


void Game::displayBoard(){
    for(auto& row : this->board){
        for(auto&cell : row){
            std::cout << cell;
        }

        std::cout << "\n";    
    }
 }

bool Game::checkDraw()
{
    for (auto& row: this->board) {
        for (auto& cell : row) {
            if (cell == " ") {
                return false;
            }
        }
    }

    return true;
}
