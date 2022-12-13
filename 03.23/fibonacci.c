#include <stdio.h>
//F(n)=F(n-1) +F(n-2), non-recursive

int main(){

    int n = 0, fib = 0, fib1 = -1, fib2 = 1, sum = 0;

    printf("Bitte die Anzahl von Fibonnaci Zahlen/Folgen eingeben: ");
    scanf("%d", &n);

    printf("F(%d) ist:", n);
    while (n >= 0)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        printf(" %d", fib);
        n --;
        sum += fib;
    }
    printf("\nSumme: %d\n", sum);
    return 0;
}