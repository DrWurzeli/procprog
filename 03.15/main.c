#include <stdio.h>
#include <stdlib.h>

//allows the user to input numbers as long as they want.
//if a 0 is entered the program exits and outputs the biggest and smallest number
//from all inputs. default value for storing values is 0.

int main(){

    int zahl1 = 0, zahl2 = 0, neueZahl;

    do{
        printf("Bitte Zahl eingeben: ");
        scanf("%d", &neueZahl);

        if (neueZahl == 0){
            printf("0 erkannt, Zahl1: %d Zahl2: %d.", zahl1, zahl2);
        }
        else if (neueZahl < zahl1) zahl1 = neueZahl;
        else if (neueZahl > zahl2) zahl2 = neueZahl;
    }while(neueZahl != 0);
 
    return EXIT_SUCCESS;
}