/*
Lies den Radius eines Kreises ein. Es soll der Umfang
und der Flächeninhalt berechnet werden.
Lagere die Funktionen und ihre Deklarationen in ein gesondertes .h/.cDateienpaar aus
und erstelle ein entsprechendes Makefile.*/

#include "circle.h"

void main(){

    int radius = input();

    printf("Radius: %d\n", radius);
    printf("Umfang: %.2f\n", circumference(radius));
    printf("Flaecheninhalt: %.2f\n", surface(radius));
}