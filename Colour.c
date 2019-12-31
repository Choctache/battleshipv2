//
// Created by jessi on 31.12.2019.
//
#include "Colour.h"

static Console console;

void setConsole(){
    console.console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    GetConsoleScreenBufferInfo(console.console, &consoleInfo);
    console.saved_attributes = consoleInfo.wAttributes;
}

void resetColour(){
    SetConsoleTextAttribute(console.console, console.saved_attributes);
}
void setColour(int colour){
    SetConsoleTextAttribute(console.console, colour);
}


