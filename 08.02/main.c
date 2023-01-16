#include "main.h"

int main(){

    int input = get_int();

    char* wochentage[7] = {"Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag"};
    /*char* wochentage[7];
    wochentage[0] = "Montag";
    wochentage[1] = "Dienstag";
    wochentage[2] = "Mittwoch";
    wochentage[3] = "Donnerstag";
    wochentage[4] = "Freitag";
    wochentage[5] = "Samstag";
    wochentage[6] = "Sonntag";
    */
    printf("Der %dte Wochentag ist: %s", input, wochentage[input-1]);

    printf("\n");
    return EXIT_SUCCESS;
}