/*
 *
 * Calculate prime numbers (Maximilian Sander)
 * template respectfully ripped from
 * Simon Grischek FOM Cologne KPP DTAG WiSe 2022
 * cfranks ../tmp/03-26/prime.c
 */

#include <stdio.h>
#include <stdbool.h>

bool prime_check(int j){

    for(int i=2; i < j; i++){
        //teilbarkeit von x durch i
        //i alles kleiner x von 2, def prime
        if(j%i == 0) return false;
    }
    //nicht teilbar und nicht 1
    return true;
}

void main(){
    //Start
    int const start = 300;
    //print start
    printf("Startwert: %d ", start);
    //vom Start rückwärts, sonst von 2 bis <=n i++
    for(int i=start; i > 1; i--){
        //primzahlcheck
        if(prime_check(i)) printf("| %d ", i);
    }
    //obligatorische neue reihe
    printf("\n");
}