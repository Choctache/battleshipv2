#include "Strings.h"

//
// Created by jessi on 30.12.2019.
//
static int lang = ENGLISH;

static const STRING strings[] = {
        /*WELCOME*/
        {"Welcome to Battleship 2.0",
         "Willkommen",
         "Bonjour"},
        /*GOODBYE*/
        {"Goodbye",
         "Auf Wiedersehen",
         "Au revoir"},
        /*START_CMD*/
        {"Press enter to start a new game or any other key to exit.",
         "Presse die Entertaste um ein neues Spiel zu starten oder jede andere Taste um das Programm zu beenden.",
         "Nei!"}
};

void setLanguage(int newLang){
    lang = newLang;
}

int getLanguage(){
    return lang;
}

char const * getMessage(int str_no)
{
    return strings[str_no].text[getLanguage()];
}