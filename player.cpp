#include "player.h"
#include <SDL2/SDL.h>

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

void Player::reapplyInformationToRenderRectangle(SDL_Rect pRect) {
    pRect.x = getX();
    pRect.y = getY();
    pRect.h = getH();
    pRect.w = getW();
}

// Getters

int Player::getX() const {
    return x;
}

int Player::getY() const {
    return y;
}

int Player::getH() const {
    return h;
}

int Player::getW() const {
    return w;
}