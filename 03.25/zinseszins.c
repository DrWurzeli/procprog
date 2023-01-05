#include <stdio.h>
//calculates interest based on given years and starting capital obtained via user input. interest earnings are not cashed out and accumulate.
void main(){

	int jahre;
	float kapital, zinssatz, zins;

	zinssatz = 4.5;

	printf("Bitte Anfangskapital eingeben: ");
	scanf("%f", &kapital);

	printf("Bitte Anzahl Jahre eingeben: ");
	scanf("%d", &jahre);

	for ( int i = 0; i < jahre; i++){
		zins = kapital * zinssatz / 100;
		kapital += zins;
		printf("%.2f\n",kapital);
	}

}
