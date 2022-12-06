#include <stdio.h>

int main(){
	
	int tag;
	printf("Bitte gib eine Zahl von 1 bis 7 ein: ");
	scanf("%d", &tag);

	switch(tag) {
		case 1:
		case 2:
		case 3: printf("Erste Wochenhälfte.\n"); break;
		case 4:
		case 5: printf("Zweite Wochenhälfte.\n"); break;
		case 6:
		case 7: printf("Wochenende!\n"); break;
		default: printf("Error.\n"); break;
	}
	return 0;
}
