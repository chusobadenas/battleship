//
//  Utils.cpp
//  battleship
//
//  Created by Jesús Badenas on 3/6/19.
//  Copyright © 2019 Jesús Badenas. All rights reserved.
//

#include "Board.hpp"
#include "Utils.hpp"

Utils::Utils() {}

int Utils::readNumber(int min, int max, string errorMsg) {
    int n;
    while (!(cin >> n) || n < min || n > max) {
        cout << errorMsg << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    return n;
}

Position* Utils::readPosition(string initialMessage) {
    int x, y;
    string errorMsg = "You entered a coordinate out of range. Please, try again: ";

    // Initial message
    cout << initialMessage << endl;

    // Get X
    cout << "Enter x: ";
    x = Utils::readNumber(1, BOARD_SIZE, errorMsg);
    x--;

    // Get Y
    cout << "Enter y: ";
    y = Utils::readNumber(1, BOARD_SIZE, errorMsg);
    y--;

    return new Position(x, y);
}
