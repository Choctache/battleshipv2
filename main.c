#include <stdio.h>
#include "Strings.h"
#include <windows.h>
#include "Colour.h"

void printStartMessage(){
    printf("\n"
           "    ____        __  __  __    _____ __    _     \n"
           "   / __ )____ _/ /_/ /_/ /__ / ___// /_  (_)___ \n"
           "  / __  / __ `/ __/ __/ / _ \\\\__ \\/ __ \\/ / __ \\\n"
           " / /_/ / /_/ / /_/ /_/ /  __/__/ / / / / / /_/ /\n"
           "/_____/\\__,_/\\__/\\__/_/\\___/____/_/ /_/_/ .___/ \n"
           "                                       /_/      \n");
}


int main() {

    setConsole();

    printStartMessage();

    printf("%s\n", getMessage(WELCOME));
    printf("%s\n", getMessage(GOODBYE));
    printf("%s\n", getMessage(START_CMD));

    setColour(GREEN);

    setLanguage(GERMAN);
    printf("%s\n", getMessage(WELCOME));
    printf("%s\n", getMessage(GOODBYE));
    printf("%s\n", getMessage(START_CMD));

    resetColour();

    setLanguage(FRENCH);
    printf("%s\n", getMessage(WELCOME));
    printf("%s\n", getMessage(GOODBYE));
    printf("%s\n", getMessage(START_CMD));

    return 0;
}

