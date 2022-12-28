#include <stdio.h>

float eingabeZahl(){
	float eingabe;
	printf("Bitte Zahl eingeben: ");
	scanf("%f",&eingabe);
	return eingabe;
}

float multipliziere(float zahl1, float zahl2){
	return zahl1 * zahl2;
}

void ausgabeErgebnis(float ergebnis){
	printf("Das Ergebnis ist: %.2f\n", ergebnis);
}

void main(){
	float zahl1 = eingabeZahl();
	float zahl2 = eingabeZahl();
	ausgabeErgebnis(multipliziere(zahl1, zahl2));
}
