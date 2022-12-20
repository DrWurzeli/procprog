#include <stdio.h>

float eingabeZahl(){
	float eingabe;
	printf("Bitte Zahl eingeben: ");
	scanf("%f",&eingabe);
	return eingabe;
}

float multipliziere(float zahl1, float zahl2){
	float ergebnis;
	ergebnis = zahl1 * zahl2;
	return ergebnis;
}

void ausgabeErgebnis(float ergebnis){
	printf("Das Ergebnis ist: %.2f\n", ergebnis);
}

void main(){
	float zahl1;
	float zahl2;
	float ergebnis;

	zahl1 = eingabeZahl();
	zahl2 = eingabeZahl();
	ergebnis = multipliziere(zahl1, zahl2);
	ausgabeErgebnis(ergebnis);
}
