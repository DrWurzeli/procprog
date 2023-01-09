#include "fibrec.h"
//calculates and prints out fibonacci number using recursion. initial value for n F(n) is obtained via user input
//can also print out the entire series of number leading up to the result
int fibonacci(int fib){
    if (fib == 0){
        return 0;
    }
    else if (fib == 1){
        return 1;
    }
    else{
        return (fibonacci(fib-1)+fibonacci(fib-2));
    }
}

void fib_ausgabe(int n){
    /*Folge
    for(int i=0; i<n; i++){
        printf("%d ", fibonacci(i));
    }*/
    printf("F(%d) ist: %d", n, fibonacci(n));
}

int main(){
    int n = input_int();
    fib_ausgabe(n);
    return 0;
}
