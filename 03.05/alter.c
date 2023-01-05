#include <stdio.h>
//returns a string based on the user input (in numbers) that resembles the users type of age. valid inputs are 1-infinite positive numbers

int main() {

	int alter;

	printf("Bitte gib dein Alter ein: ");
	scanf("%d",&alter);

	(alter < 0) ? printf("Bist du dir sicher? Probiers nochmal.\n") : (alter < 18) ? printf("Kind/Jugendlicher\n") : (alter < 67 ) ? printf("Erwachsener\n") : printf("Rentner\n");

	return 0;
}
