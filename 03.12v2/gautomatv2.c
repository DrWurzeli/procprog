#include <stdio.h>

//GetraenkeautomatVersion 0.2

int main() {

	int einwurf, auswahl;
	float kosten = 0;
	float guthaben = 0;

	printf("Getraenkeautomat | Bitte waehlen Sie: \n");
	printf("Wasser 0.5 EUR: Druecken Sie die 1.\n");
	printf("Limonade 1 EUR: Druecken Sie die 2.\n");
	printf("Bier 2 EUR: Druecken Sie die 3.\n");
	scanf("%d", &auswahl);

	switch(auswahl){
		case 1: printf("Sie haben sich fuer Wasser entschieden.\nBitte werfen Sie 0.5 EUR ein.\n"); kosten += 0.5;  break;
		case 2: printf("Sie haben sich fuer Limonade entschieden.\nBitte werfen Sie 1 EUR ein.\n"); kosten += 1; break;
		case 3: printf("Sie haben sich fuer Bier entschieden.\nBitte werfen Sie 2 EUR ein.\n"); kosten += 2; break;
		default: printf("Das haben wir leider nicht im Angebot, versuchen Sie das nochmal"); kosten+= auswahl; return 0;
	}

	printf("Einwurf: ");
	scanf("%d", &einwurf);
	guthaben += einwurf;
	//printf("Dein Guthaben betraegt %d Euro.\n", guthaben);

	( kosten <= guthaben ) ? printf("Hier ist ihr Getraenk! Wechselgeld nicht vergessen.\n") : printf("Das war nicht genug Geld, gebe Restgeld aus...\n");	

	return 0;
}
