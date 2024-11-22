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

bool Game::checkWin(std::string playertype) {

    for (auto i = 0; i< this->board.size();i++) {
        if ((board[i][0] == playertype  &&
             board[i][0] == board[i][1] &&
             board[i][1] == board[i][2])||
            (board[0][i] == playertype  &&
             board[0][i] == board[1][i] &&
             board[1][i] == board[2][i])){
            return true;
        }   
    }

    if(board[0][0] == playertype  &&
       board[0][0] == board[1][1] &&
       board[1][1] == board[2][2]) {
        return true;

    }
    
    if (board[0][2] == playertype &&
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


void Game::setMark(std::string playertype, int markInput) { 
    int row;
    int cell;

    if( markInput <= 3) {
        cell = markInput -1;
        row = 0;
    }
    else if (markInput <= 6) {
        cell = (markInput % 3) -1; 
        row = 1;
    }
    else {
        cell = (markInput % 6) -1;
        row = 2;

    }

    this->board[row][cell] = playertype;
}
void Game::addRound() {
     this->rounds += 1;
}
int Game::getRounds() {
    return this->rounds;
}