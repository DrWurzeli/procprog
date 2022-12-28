#include <stdio.h>

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

int zahl_eingabe(){
    int in;
    printf("Bitte eine Zahl eingeben: ");
    scanf("%d", &in);
    return in;
}

void fib_ausgabe(int n){
    /* Folge
    for(int i=0; i<n; i++){
        printf("%d ", fibonacci(i));
    }
    */
    printf("F(%d) ist: %d", n, fibonacci(n));
}


void main(){
    int n = zahl_eingabe();
    fib_ausgabe(n);
}