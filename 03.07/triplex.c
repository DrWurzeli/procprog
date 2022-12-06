#include <stdio.h>

int main() {
	
	int a, b, c;

	printf("Bitte gib drei verschiedene Zahlen, getrennt durch Leerzeichen, ein: ");
	scanf("%d %d %d", &a, &b, &c);

	(a == b || b == c || a == c) ? printf("Unterschiedliche Zahlen bitte.\n") : printf("Die kleinste Zahl ist: %d\n", a < b ? (a < c ? a : c) : (b < c ? b : c));

	return 0;
}
