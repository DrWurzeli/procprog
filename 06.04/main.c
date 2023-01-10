#include <stdio.h>
/*
sieve of Eratosthanes
calculates primes by elimination
from a given array of numbers, starts at 2
ends add (arrysize)+2
*/
void main(){
    int const start = 298;
    int sieb[start];
    //printf("Startwert: %d ", start);

    for(int i=0; i < start; i++){
        sieb[i] = i+2;
        //printf("%d ", sieb[i]);
    }

    printf("\nBerechne Primzahlen von 2 bis %d...\n", start+2);

    for(int j=0; j<start; j++){
        if(sieb[j] != 0){
            printf("%d ", sieb[j]);
            for(int k=2; k*sieb[j]<start+2;k++){
                    sieb[((k*sieb[j])-2)] = 0;
                }
        }
        else{
            continue;
        }
    }

    printf("\n");
}