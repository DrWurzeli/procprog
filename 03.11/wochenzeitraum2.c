#include <stdio.h>
//returns what part of the week the day, input by the user using a number from 1-7 resembling the day x of the week, is in.
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
