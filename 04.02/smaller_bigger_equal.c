#include<stdio.h>

/*
Zwei Zahlen einlesen a b, ist a gleich größer oder kleiner als b?
*/

// Funktions-Prototypen
int eingabeZahl();
void vergleich(int a, int b);

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

void vergleich(int a, int b){
    if (a > b) printf("Erste Zahl ist groesser.\n");
    else if (a == b) printf("Zahlen sind gleich.\n");
    else printf("Erste Zahl ist kleiner.");
}