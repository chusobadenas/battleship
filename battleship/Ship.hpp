//
//  Ship.hpp
//  battleship
//
//  Created by Jesús Badenas on 22/5/19.
//  Copyright © 2019 Jesús Badenas. All rights reserved.
//

#ifndef Ship_hpp
#define Ship_hpp

typedef enum {
    HORIZONTAL, VERTICAL
} Orientation;

class Ship {
private:
    int size;
    int x;
    int y;
    Orientation orientation;
public:
    Ship(int size, int x, int y, Orientation orientation);
    int getSize();
    int getX();
    int getY();
    Orientation getOrientation();
};

#endif /* Ship_hpp */
