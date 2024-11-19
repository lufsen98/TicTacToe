#include <iostream>
#include "player.hpp"
#include "game.hpp"

int main(){
    bool gameRunning = true;

    std::cout << "Welcome to Tic-Tac-Toe!\n";

    Game game1;

    while(gameRunning){
        
        game1.displayBoard();
        // get first player move
        // get second player move
        // display board?
        // anyone won? start checking after 3 moves?
        // draw?
        // display score?
        
        gameRunning = false;
    }
}
