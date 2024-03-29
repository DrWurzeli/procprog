#include "main.h"
/*
program takes a path as an input and then outputs the file type,
file name including file type and the path leading to said file.
A pointer is used to find elements in the string and then used
to set the value of the original string to \0 to cut the filename
and format from the input string. The path is then printed out.
Thanks Janine for char pointers and vastly improving readability.
*/

int main(){

    char string[] = "C:\\Eigene Dateien\\FOM\\C-Code\\main.c";

    char *p = strrchr(string, '.')+1;
    printf("Dateiendung: %s\n", p);

    p = strrchr(string, '\\')+1;
    printf("Dateiname: %s\n", p);

    p -= 1;
    *p = '\0';
    printf("Verzeichnis: %s", string);

    printf("\n");
    return EXIT_SUCCESS;
}
