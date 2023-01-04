#include "circle.h"

int input_int(){

	int input = -1;

	do {
		printf("Bitte Radius eingeben: ");

		if(scanf("%d", &input) != 1){
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
        else return input;			
	} while ((input = -1));
}