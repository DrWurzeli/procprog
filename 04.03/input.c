//this function captures a user input, validates it and then return the value.
#include "circle.h"

float input_float(){

	float input = -1;

	do {
		printf("Bitte Radius eingeben: ");

		if(scanf("%f", &input) != 1){
			scanf("%*[^\n]");
			printf("Invalide Eingabe.\n");
			input = -1;
			continue;
		}
        else if (input < 1){
            printf("Bitte Radius >= 1 eingeben.\n");
            input = -1;
            continue;
        }
					
	} while (input == -1);
	
	return input;
}