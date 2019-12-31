//
// Created by jessi on 30.12.2019.
//

#ifndef BATTLESHIPV2_STRINGS_H
#define BATTLESHIPV2_STRINGS_H

#define NUM_OF_ELEMNTS 3
enum
{
    LANG_EN,
    LANG_DE,
    LANG_FR

}LANGUAGE;

enum{
    WELCOME,
    GOODBYE,
    START_CMD
}MESSAGE;

typedef struct
{

    char const * const text[NUM_OF_ELEMNTS];

} STRING;

void setLanguage();
int getLanguage();

char const * strGet(int str_no);


#endif //BATTLESHIPV2_STRINGS_H