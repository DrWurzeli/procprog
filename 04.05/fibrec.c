#include "fibrec.h"
/*
calculates and prints out fibonacci number using recursion.
initial value for n F(n) is obtained via user input
can also print out the entire series of number leading up to the result
and reverse the entire series as well
*/
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
    for(int i=0; i<n; i++){
        printf("%d ", fibonacci(i));
    }
    
    printf("\nF(%d) ist: %d\n", n, fibonacci(n));

    for(int j=n-1; j >=0; j--){
        printf("%d ", fibonacci(j));
    }
}

int main(){
    int n = input_int();
    fib_ausgabe(n);
    return 0;
}
