#include "main.h"

int main(){

    char* vorname[5] = {"Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag"};
    char* nachname[5] = {"Eins", "Zwei", "Drei", "Vier", "Fuenf"};

    for (int i=0; i<5; i++){
        int laenge1, laenge2, space;

        laenge1 = strlen(vorname[i]);
        laenge2 = strlen(nachname[i]);
        space = 79-laenge1-laenge2;

        char fill[space];
        for(int j=0; j<=space; j++){
            fill[j] = '_';
        }

        char ausgabe[81];
        strcpy(ausgabe, vorname[i]);
        strcat(ausgabe, fill);
        strcat(ausgabe, nachname[i]);
        printf("%s\n", ausgabe);

    }

    printf("\n");
    return EXIT_SUCCESS;
}