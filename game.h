//
// Created by jessi on 30.12.2019.
//

#ifndef BATTLESHIPV2_GAME_H
#define BATTLESHIPV2_GAME_H

#include "board.h"

typedef struct{
    boardT board;
    bool hasWon;
}game;

void clearGame(game g);

bool hasWonGame(game g);

int shootBoard(game g);

void startGame(game g);

#endif //BATTLESHIPV2_GAME_H
