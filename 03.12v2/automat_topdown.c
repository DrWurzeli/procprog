//Getraenkeautomat func
//vending machine v.02 where every action has its own function, struct is used for available items for scalability reasons.
//helper functions are used to avoid duplicate code, also nice startup sequence.
#include <stdio.h>
#define VERSION "2.0.4"
#define ITEM_AMOUNT 3

struct items {
	int number;
	char name[10];
	float price;
};
typedef struct items item;

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
	printf("\nSie haben aktuell %.2f EUR.\n", balance_current);
}

void item_list(item items[ITEM_AMOUNT]){
	printf("\nWir haben im Angebot: \n");
	printf("Nummer\tPreis\t\tName:\n");
	for(int i = 0; i < ITEM_AMOUNT; i++ )
		{
			printf("%d\t%.2f EUR\t%s\n", items[i].number, items[i].price, items[i].name);
		}
}

float item_select(item items[ITEM_AMOUNT]){
	int input;
	float price;
	printf("\nAuswahlmodus:\n");
	printf("Bitte geben Sie die Nummer des gewuenschten Items ein: ");
	scanf("%d", &input);
	input -= 1;

	if (input >= 0 && input < ITEM_AMOUNT)	{
		price = items[input].price;
		printf("Sie haben %s ausgesucht.\n", items[input].name);
	}
	else{
		printf("Dieser Slot ist nicht belegt.\n");
		printf("Wir nehmen einfach mal Wasser.\n");
		price = 0.5;
		//feedback loop
	}
	
	printf("Ihre Erfrischung kostet Sie %.2f EUR.\n", price);
	return price;
}

float balance_topup(){
	float input;
	float balance_increment = 0;
	
	printf("\nZahlungsmodus:\n");
	printf("Bitte Geldmuenze einwerfen.\n");
	printf("Akzeptiert werden 1, 2 und 0.5 EUR.\n");
	printf("Einwurf: ");
	scanf("%f", &input);
	
	(input < 0) ? (printf("Invalide Eingabe.\n")) :\
	(input != 2.0f && input != 1.0f && input != 0.5f) ?\
	(printf("Wird nicht angenommen.\n")) \
	: (balance_increment = input);
	//feedback loop?

	return balance_increment;
}

//return type int zum testen
void balance_check(float balance, float cost){
	printf("\n");
	(balance >= cost) ?\
	printf("Guthaben ausreichend.\nBitte entnehmen Sie Ihre Erfrischung.\n") \
	: printf("Zahlungsfehler. Vorgang abgebrochen.\n");
	(balance > cost) && (printf("Wechselgeld nicht vergessen.\n")); //replace with topup loop
	//wechselgeld berechnen
}

void main() {
//init
	float balance = 0;
	float cost = 0;

	item items_arr[ITEM_AMOUNT] = {
		{1, "Wasser", 0.5},
		{2, "Limonade", 1.00},
		{3, "Bier", 2.00}
	};	

//run
	startup_sequence();
	item_list(items_arr);
	
	//loop start
	cost = item_select(items_arr);
	balance_print(balance);
	balance += balance_topup();

	balance_check(balance, cost);
	printf("\n");
	//loop end
}
