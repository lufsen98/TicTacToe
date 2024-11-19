#include "player.hpp"
#include <iostream>

Player::Player(std::string newPlayerType): playerType(newPlayerType){}

std::string Player::getPlayerType() {
    return this->playerType;
}

int Player::getRounds() {
    return this->rounds;
}

int Player::getMove() {
    int move;
    std::cout << "Enter coordinates for your " << this->playerType <<  " mark(1-9): ";
    std::cin >> move;
    return move;
}
