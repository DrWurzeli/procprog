#include <stdio.h>

int main(){

    int fac, i, n;

    i = fac = 1;

    printf("Fakultaet von n! finden.\nGib eine Zahl fuer n ein: ");
    scanf("%d", &n);

    while (i <= n)
    {
        fac *= i;
        i++;
    }

    printf("Die Fakultaet von %d ist: %d", n, fac);

    return 0;
}