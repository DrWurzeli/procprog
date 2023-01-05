#include <stdio.h>
#define NOTEN_ANZAHL 10
//program calculates and prints out the average score of NOTEN_ANZAHL grades.
//all grades (1 1.0 2 2.0 2.3...) are obtained via user input.
void main(){

    float noten[NOTEN_ANZAHL];
    float gesamt = 0;

    for (int i=0; i<NOTEN_ANZAHL; i++){
        printf("Bitte Note eingeben: ");
        scanf("%f", &noten[i]);
        gesamt += noten[i];
    }

    printf("Berechne Durchschnitt...\n");
    printf("Durchschnitt: %.2f\n", gesamt/(float)NOTEN_ANZAHL);
}
