//
// Created by jessi on 30.12.2019.
//

#include "coordinate.h"
#include <windows.h>


coordinate setRandomly(int size){
    coordinate c;
    c.x = rand() & size;
    c.y =rand() & size;
    return c;
}

