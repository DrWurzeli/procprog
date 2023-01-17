#include "main.h"

int main(){

    char string[] = "C:\\Eigene Dateien\\FOM\\C-Code\\main.c";

    if(strrchr(string, '.') != NULL){
        char *p = strrchr(string, '.')+1;
        printf("Dateiendung: %s\n", strstr(string, p));

        p = strrchr(string, '\\')+1;
        printf("Dateiname: %s\n", strstr(string, p));

        p -= 1;
        *p = '\0';
        printf("Verzeichnis: %s", string);
    }


    printf("\n");
    return EXIT_SUCCESS;
}