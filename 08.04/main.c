#include "main.h"
/*
program takes a path as an input and then outputs the file type,
file name including file type and the path leadinf to said file.
a pointer is used to find elements in the string and then set to
\0 to cut the filename and format from the input string.
*/

int main(){

    char string[] = "C:\\Eigene Dateien\\FOM\\C-Code\\main.c";

    char *p = strrchr(string, '.')+1;
    printf("Dateiendung: %s\n", strstr(string, p));

    p = strrchr(string, '\\')+1;
    printf("Dateiname: %s\n", strstr(string, p));

    p -= 1;
    *p = '\0';
    printf("Verzeichnis: %s", string);

    printf("\n");
    return EXIT_SUCCESS;
}