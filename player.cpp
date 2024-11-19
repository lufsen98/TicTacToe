#include "player.hpp"

Player::Player(std::string newPlayerType): playerType(newPlayerType){}


std::string Player::getPlayerType() {
    return this->playerType;
    
}