//Getraenkeautomat 2.03.24 looping + func
#include <stdio.h>
#define VERSION "2.03.24"
#define ITEM_AMOUNT 3

struct items_t {
	int number;
	char name[10];
	float price;
};
typedef struct items_t item;

//helper

void startup_sequence(){
	printf("\n");
	printf("_________________________________\n");
	printf("|				|\n");
	printf("|   :#:	   			|\n");
	printf("|   : :	   Loading...		|\n");
	printf("|   : :	   Automat bereit.	|\n");
	printf("| .'   '.  Willkommen!		|\n");
	printf("| :_____:			|\n");
	printf("| |     |			|\n");
	printf("| |  V  |  Getraenke Automat.	|\n");
	printf("| |  2  |  Version " VERSION "	|\n");
	printf("| |     |			|\n");
	printf("| |_____|			|\n");
	printf("|_______________________________|\n");
}

void balance_print(float balance_current){
	printf("Sie haben aktuell %.2f EUR.\n", balance_current);
}

void cost_print(float cost){
	printf("\nIhre aktuelle Auswahl kostet Sie: %.2f EUR.\n", cost);
}

void item_list(item *items){
	printf("\nWir haben im Angebot: \n");
	printf("Nummer\tPreis\t\tName:\n");
	for(int i = 0; i < ITEM_AMOUNT; i++ )
		{
			printf("%d\t%.2f EUR\t%s\n", items[i].number, items[i].price, items[i].name);
		}
}

//automat func
//e
int item_select(item *items){
	int input = -1;

	do {
		printf("\nAuswahlmodus:\n");
		printf("Bitte geben Sie die Nummer des gewuenschten Artikels ein: ");

		if(scanf("%d", &input) != 1){
			scanf("%*[^\n]");
			printf("Invalide Eingabe.\n");
			input = -1;
			continue;
		}
		
		input -= 1;
		if (!(input >= 00 && input < ITEM_AMOUNT)) printf("Dieser Slot ist nicht belegt.\n");			
	} while (!(input >= 00 && input < ITEM_AMOUNT));

	printf("Sie haben %s ausgesucht.\n", items[input].name);
	return input;
}

int item_amount(){
	int amount = -1;

	do{
		printf("\nBitte geben Sie die Anzahl der gewuenschten Artikel ein: ");

		if(scanf("%d", &amount) != 1){
			scanf("%*[^\n]");
			printf("Invalide Eingabe.\n");
			amount = -1;
			continue;
		}

		if (amount < 1) printf("Der Artikel muss mindestens 1x gekauft werden.\n");
	} while (amount < 1);

	return amount;
}

float balance_topup(){
	float input = -1;
	float balance_increment = 0;
	
	printf("\nZahlungsmodus:\n");
	printf("Bitte Geldmuenze einwerfen.\n");
	printf("Akzeptiert werden 1, 2 und 0.5 EUR.\n");
	printf("Einwurf: ");
		
	if((scanf("%f", &input)) != 1){
		scanf("%*[^\n]");
		input = -1;
		}

	if (input < 0) printf("Invalide Eingabe.\n");
	else if (input != 2.0f && input != 1.0f && input != 0.5f) printf("Wird nicht angenommen.\n");
	else balance_increment = input;

	return balance_increment;
}

//v
float item_cost(item *items, int selection){
	float price;
	price = items[selection].price;	
	//printf("Ihre Erfrischung kostet Sie %.2f EUR.\n", price); //deprecated
	return price;
}

void balance_check(float cost){
	float balance = 0;

	do{
		cost_print(cost);
		balance_print(balance);
		balance += balance_topup();
	} while (balance < cost);

	printf("\nGuthaben ausreichend. Ausgabe erfolgt.\n");
	(balance > cost) && (printf("Wechselgeld nicht vergessen.\n"));
}

//a
void items_out(int amount){
	for (int i = 1; i <= amount; i++)
	{
		printf("Flasche %d von %d wurde ausgegeben.\n", i, amount);
	}
}

//^-^//
void main() {
	float cost = 0;
	int amount = 0;
	int selection = 0;

	item items_arr[ITEM_AMOUNT] = {
		{1, "Wasser", 0.5},
		{2, "Limonade", 1.00},
		{3, "Bier", 2.00}
	};	

	startup_sequence();
	item_list(items_arr);
	
	selection = item_select(items_arr);
	cost = item_cost(items_arr, selection);
	amount = item_amount();
	cost *= amount;

	balance_check(cost);
	items_out(amount);

	printf("\nAuf Wiedersehen.\n");
}
