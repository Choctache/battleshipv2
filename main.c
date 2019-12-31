#include <stdio.h>
#include "Strings.h"


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
    printStartMessage();
    char * message = strGet(0);

    printf("%s\n", strGet(WELCOME));
    printf("%s\n", strGet(GOODBYE));
    printf("%s\n", strGet(START_CMD));
    setLanguage(1);
    printf("%s\n", strGet(WELCOME));
    setLanguage(2);
    printf("%s\n", strGet(WELCOME));

    return 0;
}

