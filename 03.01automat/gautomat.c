#include <stdio.h>

//GetraenkeautomatVersion 0.1
//simplified version of a vending machine. user can input 1 to get a positive output.

int main() {

	int einwurf = 0;

	printf("Getraenkeautomat | Bitte werfen Sie 1 Euro ein: ");
	scanf("%d", &einwurf);

	//ueberpruefe geldstueck
	if(einwurf == 1){
		printf("\nVielen Dank, bitte entnehmen Sie ihr Getraenk.\n");
	}
	else {
		printf("\nSie haben kein 1 Euro Stueck eingeworfen.\n");
	}

	return 0;
}
