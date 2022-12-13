#include <stdio.h>
//F(n)=F(n-1) +F(n-2), non-recursive

int main(){

    int n = 0, fib = 0, fibinc = -1, fibex = 1, fibsum = 0;

    printf("Bitte die Anzahl von Fibonnaci Zahlen/Folgen eingeben: ");
    scanf("%d", &n);

    printf("F(%d) ist:", n);
    while (n >= 0)
    {
        //printf("(fibinc%d fibex%d)", fibinc, fibex);
        fib = fibinc + fibex;
        fibinc = fibex;
        fibex = fib;
        printf(" %d", fib);
        //printf("(fibinc%d fibex%d)", fibinc, fibex);
        n --;
        fibsum += fib;
    }
    printf("\nSumme: %d\n", fibsum);
    return 0;
}