//
//  Position.hpp
//  battleship
//
//  Created by Jesús Badenas on 3/6/19.
//  Copyright © 2019 Jesús Badenas. All rights reserved.
//

#ifndef Position_hpp
#define Position_hpp

class Position {
private:
    int x;
    int y;
public:
    Position(int x, int y);
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
};

#endif /* Position_hpp */
