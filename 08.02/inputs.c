//this function captures a user input, validates it and then return the value.
// !! uses -1 as starting point, if -1 is a valid input, add cornercase !!
#include "main.h"

int get_int(){

	int input = -1;

	do {
		printf("Bitte eine Zahl von 1-7 eingeben: ");

		if(scanf("%d", &input) != 1){
			scanf("%*[^\n]");
			printf("Invalide Eingabe.\n");
			input = -1;
			continue;
		}
        else if (input < 1 || input > 7){
            printf("Bitte Zahl von 1 bis 7 eingeben.\n");
            input = -1;
            continue;
        }
					
	} while (input == -1);
	
	return input;
}
