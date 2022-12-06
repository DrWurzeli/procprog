#include <stdio.h>

int main(){
	
	int tag;
	printf("Bitte gib eine Zahl von 1 bis 7 ein: ");
	scanf("%d", &tag);

	(tag < 1 || tag > 7) ? printf("Deine Woche hat seltsame Tage...\n") : (tag >= 1 && tag <= 3) ? printf("Erste Wochenhälfte\n") : (tag >= 4 && tag <= 5) ? printf("Zweite Wochenhälfte\n") : printf("Wochenende!!!\n");

	return 0;
}
