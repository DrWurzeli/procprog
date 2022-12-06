//taschenrechner

#include<stdio.h>

int main() {

float zahl1, zahl2, summe;

printf("Geben Sie die 1. Zahl ein: ");
scanf("%f", &zahl1);
printf("Geben Sie die 2. Zahl ein: ");
scanf("%f", &zahl2);
summe = zahl1 + zahl2;
printf("Die Summe ergibt %f\n", summe);

return 0;

}
