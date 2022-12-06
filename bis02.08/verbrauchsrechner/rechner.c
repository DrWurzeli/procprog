//Benzinverbrauch

#include<stdio.h>

int main() {

float liter, strecke, verbrauch;

//in
printf("Bitte gib die verbrauchten Liter ein: ");
scanf("%f", &liter);
printf("Bitte gib die gefahrenen Kilometer ein: ");
scanf("%f", &strecke);

//calc
verbrauch = (liter * 100)/strecke;

//out
printf("Dein Verbrauch war %2.2f liter/100km\n", verbrauch);

return 0;
}
