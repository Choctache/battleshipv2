//
// Created by jessi on 30.12.2019.
//

#include "coordinate.h"
#include "direction.h"
#include "ship.h"
#include <stdbool.h>

#ifndef BATTLESHIPV2_BOARD_H
#define BATTLESHIPV2_BOARD_H

typedef struct {
  int size;
  int board[10][10];
}boardT;

bool canPlaceShip(ship s);

void placeShip(ship s);

boardT initBoard();

bool validCoordinate(coordinate c);

void printBoard(boardT);

#endif //BATTLESHIPV2_BOARD_H
