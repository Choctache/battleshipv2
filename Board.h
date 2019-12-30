//
// Created by jessi on 30.12.2019.
//

#ifndef BATTLESHIPV2_BOARD_H
#define BATTLESHIPV2_BOARD_H

#include <cerrno>
#include <stdbool.h>

#define VERTICAL 0
#define HORIZONTAL 1

#define ROW 10
#define COLUMN 10

// symbols
#define HIT 'x'
#define SUNK '#'
#define WATER '~'
#define START ' '

#define NUM_OF_SHIPS 5

// ship id
#define CARRIER  'a'
#define BATTLESHIP  'b'
#define CRUISER  'c'
#define SUBMARINE  's'
#define DESTROYER  'd'

typedef enum{
    CARRIER_E = 5,
    BATTLESHIP_E = 4,
    CRUISER_E = 3,
    SUBMARINE_E = 3,
    DESTROYER_E = 2
} ShipType;

typedef struct{
    char symbol;
    int length;
    int type;
} Ship;

typedef struct{
    int row;
    int column;
} Coordinate;

typedef struct{
    Coordinate position;
    int direction;
} RandomLocation;

typedef struct{
    char symbol;
    char type;
} Cell;

void initializeBoard();
void printBoard();
void placeShip();

bool canPlaceShip();

RandomLocation generateRandomLocation();

int generateRandomNum();



#endif //BATTLESHIPV2_BOARD_H

