#include "circle.h"

void main(){

    int radius = input();

    printf("Radius: %d\n", radius);
    printf("Umfang: %.2f\n", circumference(radius));
    printf("Flaecheninhalt: %.2f\n", surface(radius));
}