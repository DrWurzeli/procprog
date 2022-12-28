#include <stdio.h>
#define ANZAHL 10

void arr_print(int arr[ANZAHL]){

    printf("Array: \n");
    for(int i=0; i < ANZAHL; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int arr_bubblesort(int arr[ANZAHL]){

    for(int i = 1; i < ANZAHL; i++){
        for(int j = 0; j < ANZAHL-i; j++){
            int temp;
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }    
    return arr[ANZAHL];
}

void main(){

    int zahlen_arr[ANZAHL] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    arr_print(zahlen_arr);
    zahlen_arr[ANZAHL] = arr_bubblesort(zahlen_arr);
    arr_print(zahlen_arr);
}