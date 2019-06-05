//
//  Position.cpp
//  battleship
//
//  Created by Jesús Badenas on 3/6/19.
//  Copyright © 2019 Jesús Badenas. All rights reserved.
//

#include "Position.hpp"

Position::Position(int x, int y) {
    this->x = x;
    this->y = y;
}

int Position::getX() {
    return x;
}

int Position::getY() {
    return y;
}

void Position::setX(int x) {
    this->x = x;
}

void Position::setY(int y) {
    this->y = y;
}
