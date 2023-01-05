#include <stdio.h>
#define ANZAHL 10
//sorts and prints a given array of integers from smallest to biggest number/element. it actually works.
void arr_print(int *arr){

    printf("Array: \n");
    for(int i=0; i < ANZAHL; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int arr_bubblesort(int *arr){

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
}

void main(){

    int zahlen_arr[ANZAHL] = {-150, -233, 4748, -305, -1, 2808, -3574, 431, -23, 0};

    arr_print(zahlen_arr);
    arr_bubblesort(zahlen_arr);
    arr_print(zahlen_arr);
}
