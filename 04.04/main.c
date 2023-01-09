#include "ggt.h"


int ggt(int zahl1, int zahl2){
    printf("ggt: %d %d\n", zahl1, zahl2);
    if (zahl1 == zahl2) return zahl1;
    else if (zahl1 > zahl2) return ggt(zahl1-zahl2, zahl2);
    else return (ggt(zahl1, zahl2-zahl1));
}

int main(){
    int zahl1 = input_int();
    int zahl2 = input_int();

    printf("Zahl 1: %d\n", zahl1);
    printf("Zahl 2: %d\n", zahl2);

    printf("Ergebnis: %d\n", ggt(zahl1, zahl2));

    return 0;    
}