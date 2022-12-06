#include <stdio.h>

int main() {

	int tag;

	printf("Bitte gib eine Zahl von 1 bis 7 ein: ");
	scanf("%d", &tag);

	switch(tag){
	
	case(1): printf("Montag!\n"); break;
	case(2): printf("Dienstag!\n"); break;
	case(3): printf("Mittwoch!\n"); break;
	case(4): printf("Donnerstag!\n"); break;
	case(5): printf("Freitag!\n"); break;
	case(6): printf("Samstag!\n"); break;
	case(7): printf("Sonntag!\n"); break;
	default: printf("Die Woche hätte ich auch gerne.. versuchs nochmal.\n");
	}

	return 0;
}
