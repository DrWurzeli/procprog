#include <stdio.h>
//returns a string resembling german grades based on the amount of points reached. valid inputs are the numbers 0 to 10.

int main () {

	int punktzahl;

	printf("Bitte gib deine Punktezahl von 0-10 ein: ");
	scanf("%d",&punktzahl);
	
	if (punktzahl > 10 || punktzahl < 0){
		printf("Die Punktzahl soll zwischen 0 und 10 liegen.\n");
		return 0;
	}

	switch(punktzahl){
	
	case (10): printf("Sehr gut!\n"); break;
	case (9): printf("gut\n"); break;
	case (8): printf("befriedigend\n"); break;
	case (7): printf("ausreichend\n"); break;
	case (6): printf("mangelhaft\n"); break;
	default: printf("ungenügend\n");
	}

	return 0;
}
