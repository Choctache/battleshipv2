//
// Created by jessi on 30.12.2019.
//

#ifndef BATTLESHIPV2_SHIP_H
#define BATTLESHIPV2_SHIP_H

#include "direction.h"
#include "coordinate.h"

typedef struct{
    coordinate c;
    direction d;
    int length;
}ship;

#endif //BATTLESHIPV2_SHIP_H
