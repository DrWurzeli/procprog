#include <stdio.h>
//calculates and returns the faculty of a given integer
int main(){

    int fac, i, n;

    i = fac = 1;

    printf("Fakultaet n! berechnen.\nGib eine Zahl fuer n ein: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fac *= i;
        i++;
    }

    printf("Die Fakultaet von %d ist: %d", n, fac);

    return 0;
}
