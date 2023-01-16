/*
Initialisiere ein paar Arrays mit Produktname, Packungsgröße in Gramm und Preis in Euro.
Gib eine Liste der Produkte mit diesen Werten aus:
Produktname, Packungsgröße, Kilopreis netto, Kilopreis brutto, in Euro. 7% USt
Kilopreis wird in einer eigenen Funktion berechnet.
*/
#include "main.h"

float kPreis(float preis, int groesse){
    return preis/(float)groesse * 1000;
}

int main(){

    char* pname[5] = {"Butter", "Brot", "Tee", "Honig", "Hummus"};
    int pgroesse[5] = {250, 300, 75, 450, 100};
    float ppreis[5] = {2.50, 1.90, 0.85, 7.50, 1.05};

    printf("\nPreise in EUR/Kilogramm.\n");
    printf("Name\tGramm\tnetto\tbrutto\n");

    for(int i=0; i<5; i++){
        
        float kP = kPreis(ppreis[i], pgroesse[i]);

        printf("%s\t%d\t%.2f\t%.2f", pname[i], pgroesse[i], kP, kP*1.07);
        printf("\n");
    }

    printf("\n");
    return EXIT_SUCCESS;
}