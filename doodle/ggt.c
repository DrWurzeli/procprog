#include <stdio.h>

int ggt_it(int x, int y){
    while(x != y){
        if(x > y) x = x-y;
        else y = y-x;
    }
    return x;
}

int ggt_rec(int x, int y){
    if (x == y) return x;
    else if (x > y) return ggt_rec(x-y, y);
    else return ggt_rec(x, y-x);
}

int main(){

    int input;
    printf("Bitte Zahl1 eingeben: ");
    scanf("%d", &input);

    int input2;
    printf("Bitte Zahl2 eingeben: ");
    scanf("%d", &input2);

    printf("ggT: %d\n", ggt_it(input, input2));
    printf("ggT: %d\n", ggt_rec(input, input2));

    return 0;
}