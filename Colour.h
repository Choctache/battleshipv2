//
// Created by jessi on 31.12.2019.
//

#include <windows.h>
#ifndef BATTLESHIPV2_COLOUR_H
#define BATTLESHIPV2_COLOUR_H

enum{
    RED = FOREGROUND_RED,
    BLUE = FOREGROUND_BLUE,
    GREEN = FOREGROUND_GREEN,
    INTENSE = FOREGROUND_INTENSITY
}COLOUR;


typedef struct {
    HANDLE console;
    WORD saved_attributes;
} Console;

void setConsole();
void resetColour();
void setColour(int colour);


#endif //BATTLESHIPV2_COLOUR_H
