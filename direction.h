//
// Created by jessi on 30.12.2019.
//

#ifndef BATTLESHIPV2_DIRECTION_H
#define BATTLESHIPV2_DIRECTION_H

typedef struct{
    int x;
    int y;
} direction;

direction getDirection(int num);

#endif //BATTLESHIPV2_DIRECTION_H
