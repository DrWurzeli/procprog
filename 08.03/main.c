#include "main.h"

/*
Das Programm erstellt zwei Arrays von Strings, und formatiert eine Ausgabe
von konstant 80 Zeichen sodass alles schön gleichmäßig ist.
Basically ein Test der String Funktionen oder so, idk.
*/

int main(){

    char* vorname[5] = {"Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag"};
    char* nachname[5] = {"Eins", "Zwei", "Drei", "Vier", "Fuenf"};

    for (int i=0; i<5; i++){
        int len1 = strlen(vorname[i]);
        int len2 = strlen(nachname[i]);
        int space = 80 - len1 - len2;

        char ausgabe[81];

        strcpy(ausgabe, vorname[i]);

        for(int j=0; j<space; j++){
            strcat(ausgabe, "_");
        }
        strcat(ausgabe, nachname[i]);
        printf("%s\n", ausgabe);

    }

    printf("\n");
    return EXIT_SUCCESS;
}