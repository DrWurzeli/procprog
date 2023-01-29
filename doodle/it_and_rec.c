#include <stdio.h>
//calculating faculty and fibonacci numbers using iterative and recursive approaches.
int fac_it(int in){
    int fac = in;

    for(int i = fac-1; i>0; i--){
        fac = fac*i;
    }

    return fac;
}

int fac_rec(int in){
    if (in == 1) return 1;
    else return in*fac_rec(in-1);
}

int fib_it(int in){
    int z01 = -1, z02 = 1, fib;
    
    while(in >= 0){
        fib = z01 + z02;
        z01 = z02;
        z02 = fib;
        in--;
    }

    return fib;
}

int fib_rec(int in){
    if (in == 1) return 1;
    else if (in == 0 ) return 0;
    else return fib_rec(in-1)+fib_rec(in-2);
}

int main(){

    int input;
    printf("Bitte Zahl eingeben: ");
    scanf("%d", &input);

    printf("Faculty: %d\n", fac_it(input));
    printf("Faculty: %d\n", fac_rec(input));
    printf("Fibonacci: %d\n", fib_it(input));
    printf("Fibonacci: %d\n", fib_rec(input));
}