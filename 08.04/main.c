#include "main.h"

int main(){

    char string[] = "C:\\Eigene Dateien\\FOM\\C-Code\\main.c";

    if(strrchr(string, '.') != NULL){
        printf("Dateiendung: %s\n", strstr(string, strrchr(string, '.')+1)); 
        printf("Dateiname: %s\n", strstr(string, strrchr(string, '\\')+1));
        char *ende = strrchr(string, '\\');
        if ((strrchr(string, '\\'))){
            *ende = '\0';
        }
        printf("Verzeichnis: %s", string);
    }


    printf("\n");
    return EXIT_SUCCESS;
}