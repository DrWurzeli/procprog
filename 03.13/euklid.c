#include <stdio.h>
//algorithm of euklid that returns the greatest common divisor of two integers dividing them without a remainder

int main(){

    int x = 0, y = 0;

    printf("Bitte gib zwei Zahlen ein: ");
    scanf("%d %d", &x, &y);

    while (x != y)
    {
        (x > y) ? (x -= y) : (y -= x);
    }

    printf("%d ist der ggT.\n", x);

    return 0;
}
