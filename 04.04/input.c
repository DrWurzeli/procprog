//this function captures a user input, validates it and then return the value.
#include "ggt.h"

int input_int(){

	int input = -1;

	do {
		printf("Bitte eine Zahl eingeben: ");

		if(scanf("%d", &input) != 1){
			scanf("%*[^\n]");
			printf("Invalide Eingabe.\n");
			input = -1;
			continue;
		}
        else if (input < 1){
            printf("Bitte Zahl >= 1 eingeben.\n");
            input = -1;
            continue;
        }
					
	} while (input == -1);
	
	return input;
}