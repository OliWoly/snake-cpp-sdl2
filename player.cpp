#include "player.h"

// Constructor implementation
Player::Player(int x, int y, int h, int w){
    this->x = x;
    this->y = y;
    this->h = h;
    this->w = w;
}

// Function to move the player 10 units to the right
void Player::moveRight() {
    x += 10;
}

// Getters

int getX()const{
    return x;
}

int getY()const{
    return y;
}

int getH()const{
    return h;
}

int getW()const{
    return w;
}
