#include <stdio.h>
//F(n)=F(n-1) +F(n-2), non-recursive

int main(){

    int n = 0, fib = 0;
    int fib1 = -1;
    int fib2 = 1;

    printf("Bitte die Anzahl von Fibonnaci Zahlen/Folgen eingeben: ");
    scanf("%d", &n);

    (n == 0 ) && (printf("0\n"));

    while (n > 0)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
        printf(" %d", fib);
        n --;
    }

    return 0;
}