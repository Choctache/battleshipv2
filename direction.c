//
// Created by jessi on 30.12.2019.
//
#include "direction.h"

direction getDirection(int num){
    direction dir;
    switch (num) {
        case 0:
            dir.x = 0;
            dir.y = 1;
            break;
        case 1:
            dir.x = 1;
            dir.y = 0;
            break;
        case 2:
            dir.x = 0;
            dir.y = -1;
            break;
        case 3:
            dir.x = -1;
            dir.y = 0;
            break;
    }
    return dir;
}
