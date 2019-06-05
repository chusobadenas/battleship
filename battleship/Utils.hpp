//
//  Utils.hpp
//  battleship
//
//  Created by Jesús Badenas on 3/6/19.
//  Copyright © 2019 Jesús Badenas. All rights reserved.
//

#ifndef Utils_hpp
#define Utils_hpp

#include <iostream>
#include <string>
#include "Position.hpp"

using namespace std;

class Utils {
private:
    Utils();
public:
    static int readNumber(int min, int max, string errorMsg);
    static Position* readPosition(string initialMessage);
};

#endif /* Utils_hpp */
