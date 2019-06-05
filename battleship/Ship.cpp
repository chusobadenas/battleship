//
//  Ship.cpp
//  battleship
//
//  Created by Jesús Badenas on 22/5/19.
//  Copyright © 2019 Jesús Badenas. All rights reserved.
//

#include "Ship.hpp"

Ship::Ship(int size, int x, int y, Orientation orientation) {
    this->size = size;
    this->x = x;
    this->y = y;
    this->orientation = orientation;
}

int Ship::getSize() {
    return size;
}

int Ship::getX() {
    return x;
}

int Ship::getY() {
    return y;
}

Orientation Ship::getOrientation() {
    return orientation;
}
