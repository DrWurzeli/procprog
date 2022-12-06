//converts given seconds to days, hours, minutes and seconds

#include<stdio.h>

int main(){

	double initseconds, secondsleft;
	int seconds, days, hours, minutes;

	//in
	printf("Bitte gib die Anzahl zu konvertierender Sekunden  ein: ");
	scanf("%lf", &initseconds);

	//calc
	seconds = initseconds;
	
	days = seconds / 86400;
	seconds -= days * 86400;
	hours = seconds / 3600;
	seconds -= hours * 3600; 
	minutes = seconds / 60;

	//Nachkommastellen der Sekunden wiederherstellen
	secondsleft = initseconds - (days*86400) - (hours*3600) - (minutes*60);

	//out
	printf("%f Sekunden sind:\n%d Tage\n%d Stunden\n%d Minuten\nund %1.2f Sekunden.\n",initseconds, days, hours, minutes, secondsleft);

	return 0;
}
