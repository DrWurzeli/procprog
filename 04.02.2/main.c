#include "vergleich.h"

/*
Zwei Zahlen einlesen a b, ist a gleich größer oder kleiner als b?
Auslagerung in .h und zweite .c
*/

// Hauptprogramm
void main() {
    int a = eingabeZahl();
    int b = eingabeZahl();
    // Rechenvorgang
    vergleich(a, b);
}

// Funktionen
int eingabeZahl() {
    int eingabe;
    printf("Eingabe Zahl: ");
    scanf("%d", &eingabe);
    return eingabe;
}
