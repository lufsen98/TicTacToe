#include <iostream>
#include "player.hpp"
#include "game.hpp"

int main(){
    bool gameRunning = true;

    std::cout << "Welcome to Tic-Tac-Toe!\n";

    Game game1;
    game1.displayBoard();

    Player player1("X");
    Player player2("O");

    while(gameRunning){
        game1.setMark(player1.getPlayerType(), player1.getMove());
        game1.displayBoard();
     
        if(game1.checkWin(player1.getPlayerType())) {
            std::cout << player1.getPlayerType() << " Won\n";
            gameRunning = false;
        }

        game1.setMark(player2.getPlayerType(), player2.getMove());
        game1.displayBoard();

        if(game1.checkWin(player2.getPlayerType())) {
            std::cout << player2.getPlayerType() << " Won\n";
            gameRunning = false;
        }

        if(game1.checkDraw()) {
            std::cout << "It's a draw!\n";
            gameRunning = false;
        }
    }

    return 0;
}
