#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float ph;
	
	printf("Enter ph value: \n");
	scanf("%f", &ph);
	
	if (ph > 7){
		if (ph < 12){
			printf("Alkaline");
		}
		else if (ph > 12) {
			printf("Very alkaline");
		}
	}
	else if (ph == 7){
		printf("Neutral");
	}
	else if (ph < 7 && ph > 2){
		printf("Acidic");
	}
	else if (ph < 2){
		printf("Very acidic");
	}
	
	
	
	
	return 0;
}
