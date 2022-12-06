//converts days into minutes, seconds and hours

#include<stdio.h>

int main(){

	float days, seconds, minutes, hours;

	//in
	printf("Bitte gib die Anzahl Tage ein: ");
	scanf("%f", &days);

	//calc
	seconds = days * 86400;
	minutes = days * 1440;
	hours = days * 24;

	//out
	printf("%2.2f Tage sind %2.2f Stunden \noder %2.2f Minuten \noder auch %2.2f Sekunden.\n", days, hours, minutes, seconds);

	return 0;
}
