//
// Created by jessi on 30.12.2019.
//

#ifndef BATTLESHIPV2_STRINGS_H
#define BATTLESHIPV2_STRINGS_H

#define NUM_OF_LANGUAGES 3
enum
{
    ENGLISH,
    GERMAN,
    FRENCH

}LANGUAGE;

enum{
    WELCOME,
    GOODBYE,
    START_CMD
}MESSAGE;

typedef struct
{

    char const * const text[NUM_OF_LANGUAGES];

} STRING;

void setLanguage();
int getLanguage();

char const * getMessage(int str_no);


#endif //BATTLESHIPV2_STRINGS_H
