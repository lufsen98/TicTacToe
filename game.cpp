#include "game.hpp"
#include <iostream>
#include <stdlib.h>

void Game::displayBoard(){
    std::system("clear");
    for(auto& row : this->board) {
        for(auto&cell : row){
            std::cout << cell;
        }

        std::cout << "\n";    
    }
 }

bool Game::checkWin(){
    for (auto i = 0; i< this->board.size();i++) {
        if ((board[i][0] != " " &&
            board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])||
           (board[0][i] != " "  &&
            board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])){
                return true;
        }   
    }

    if(board[0][0] != " " &&
       board[0][0] == board[1][1] &&
       board[1][1] == board[2][2]) {
        return true;

    }
    
    if (board[0][2] != " " &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0]) {
        return true;
    }

    return false;
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
