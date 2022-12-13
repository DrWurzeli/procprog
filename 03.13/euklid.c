#include <stdio.h>

int main(){

    int x = 0, y = 0;

    printf("Bitte gib zwei Zahlen ein: ");
    scanf("%d %d", &x, &y);

    while (x != y)
    {
        if ( x > y)
        {
            x -= y;
        }
        else
        {
            y -= x;
        }

    }

    printf("%d ist der ggT.", x);

    return 0;
}