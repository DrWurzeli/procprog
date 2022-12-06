//Berechne den Flaecheninhalt eines Kreises

#include<stdio.h>

int main() {

	float radius, flaecheninhalt;
	float pi = 3.141592;
 
	//in
	printf("Bitte gib den Radius deines Kreises ein: ");
	scanf("%f", &radius);

	//calc
	flaecheninhalt = radius * radius * pi;

	//out
	printf("Der Flaecheninhalt deines Kreises ist: %2.2f Einheiten.\n", flaecheninhalt);

	return 0;
}
