#include <stdio.h>
//calculates the interest based on years and starting capital that is obtained via user input
//interest is cashed out every year in this scenario
void main(){

	int jahre;
	float kapital, zinssatz, zins;

	zinssatz = 4.5;

	printf("Bitte Anfangskapital eingeben: ");
	scanf("%f", &kapital);

	printf("Bitte Anzahl Jahre eingeben: ");
	scanf("%d", &jahre);

	zins = kapital * zinssatz / 100;

	for ( int i = 0; i < jahre; i++){
		kapital += zins;
		printf("%.2f\n",kapital);
	}

}
