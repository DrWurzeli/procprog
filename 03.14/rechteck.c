#include <stdio.h>
//prints out a 10x10 rectangle thats made up entirely out of stars
int main(){
    
    for (int i=0; i < 10; i++)
    {
        for (int j=0; j <10; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
