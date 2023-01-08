/*
Lies den Radius eines Kreises ein. Es soll der Umfang
und der Flächeninhalt berechnet werden.
Lagere die Funktionen und ihre Deklarationen in ein gesondertes .h/.cDateienpaar aus
und erstelle ein entsprechendes Makefile.

This program calculates the circumference and surface area of a circle given a radius.
Radius is obtained via user input. A Makefile is used to compile everything into an .exe
*/

#include "circle.h"

int main(){

    float radius = input_float();

    printf("Radius: %.2f E\n", radius);
    printf("Umfang: %.2f E\n", circumference(radius));
    printf("Flaecheninhalt: %.2f FE\n", surface(radius));

    return EXIT_SUCCESS;
}