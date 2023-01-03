#include<stdio.h>

/*
Zwei Zahlen einlesen, welche von beiden ist größer?
*/

// Funktions-Prototypen
int eingabeZahl();
void ausgabeErgebnis(int x);
int compare(int a, int b);

// Hauptprogramm
int main() {
    int a = eingabeZahl();
    int b = eingabeZahl();
    // Rechenvorgang
    ausgabeErgebnis(compare(a, b));
    return 0;
}

// Funktionen
int eingabeZahl() {
    int eingabe;
    printf("\nEingabe Zahl: ");
    scanf("%d", &eingabe);
    return eingabe;
}

int compare(int a, int b){
    if (a > b) return a;
    return b;
}

void ausgabeErgebnis(int x) {
    printf("\nGroessere Zahl ist: %i\n", x);
}