//Getraenkeautomat strukturiert
#include <stdio.h>
#define VERSION "2.0.3"
#define ITEM_AMOUNT 3

struct items {
	int nummer;
	char name[10];
	float preis;
};
typedef struct items item;

void startup_sequenz(){
	printf("\n");
	printf("Starte Automaten...\n");
	printf("Getraenkeautomat Version: " VERSION ".\n");
	printf("Beep Boop. Start erfolgreich!\n\n");
}

void printbalance(float guthaben_aktuell){
	printf("\nSie haben aktuell %.2f EUR.\n", guthaben_aktuell);
}

void listitems(item items[ITEM_AMOUNT]){
	printf("Wir haben im Angebot: \n");
	printf("Nummer\tPreis\t\tName:\n");
	for(int i = 0; i < ITEM_AMOUNT; i++ )
		{
			printf("%d\t%.2f EUR\t%s\n", items[i].nummer, items[i].preis, items[i].name);
		}
}

float item_auswahl(item items[ITEM_AMOUNT]){
	int eingabe;
	float preis;
	printf("\nAuswahlmodus:\n");
	printf("Bitte geben Sie die Nummer des gewuenschten Items ein: ");
	scanf("%d", &eingabe);
	eingabe -= 1;

	if (eingabe >= 0 && eingabe < ITEM_AMOUNT)	{
		preis = items[eingabe].preis;
		printf("Sie haben %s ausgesucht.\n", items[eingabe].name);
	}
	else{
		printf("Dieser Slot ist nicht belegt.\n");
		printf("Wir nehmen einfach mal Wasser.\n");
		preis = 0.5;
		//loopen nach oben statt wasser
	}
	
	printf("Ihre Erfrischung kostet Sie %.2f EUR.\n", preis);
	return preis;
}

float geld_einwurf(float guthaben){
	float einwurf;
	float guthaben_neu;
	
	printf("\nZahlungsmodus:\n");
	printf("Bitte Geldmuenze einwerfen.\n");
	//printf("Akzeptiert werden 1, 2 und 0.5 EUR.\n");
	printf("Einwurf: ");
	scanf("%f", &einwurf);

	(einwurf < 0) ? (printf("Fehler.\n")) : (guthaben_neu = guthaben + einwurf);

	return guthaben_neu;
}

void ausreichend_geld(float guthaben, float kosten){
	printf("\n");
	(guthaben >= kosten) ?\
	printf("Guthaben ausreichend.\nBitte entnehmen Sie Ihre Erfrischung.\nWechselgeld nicht vergessen.\n") \
	: printf("Gebe Restgeld aus, versuchs nochmal.\n");
	//return int0/1 zum testen
	//wechselgeld berechnen
}

void main() {
//init
	float guthaben = 0;
	float kosten = 0;

	item arr_items[ITEM_AMOUNT] = {
		{1, "Wasser", 0.5},
		{2, "Limonade", 1.00},
		{3, "Bier", 2.00}
	};	

//run
	startup_sequenz();
	listitems(arr_items);
	
	//input detect?
	kosten = item_auswahl(arr_items);
	printbalance(guthaben);
	guthaben = geld_einwurf(guthaben);

	ausreichend_geld(guthaben, kosten);
	//loop on feedback from ^^
}
