#include <stdio.h>

int main() {

	int alter;

	printf("Bitte gib dein Alter ein: ");
	scanf("%d",&alter);

	(alter < 0) ? printf("Bist du dir sicher? Probiers nochmal.\n") : (alter < 18) ? printf("Kind/Jugendlicher\n") : (alter < 67 ) ? printf("Erwachsener\n") : printf("Rentner\n");

	return 0;
}
