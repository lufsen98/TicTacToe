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
