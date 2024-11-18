#include <iostream>
#include "player.hpp"
#include "game.hpp"



int main(){
    bool gameRunning = true;

    std::cout << "Welcome to Tic-Tac-Toe!\n";

    Game game1;

    while(gameRunning){
        
        game1.displayBoard();
       

        
        gameRunning = false;
        
    }



}