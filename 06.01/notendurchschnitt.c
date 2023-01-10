#include "durchschnitt.h"
#define NOTEN_ANZAHL 10
//program calculates and prints out the average score of NOTEN_ANZAHL grades.
//all grades (1 1.0 2 2.0 2.3...) are obtained via user input.
int main(){

    float noten[NOTEN_ANZAHL];
    float gesamt = 0;

    for (int i=0; i<NOTEN_ANZAHL; i++){
        noten[i] = get_float();
        gesamt += noten[i];
    }

    printf("Berechne Durchschnitt...\n");
    printf("Durchschnitt: %.2f\n", gesamt/(float)NOTEN_ANZAHL);

    return 0;
}
