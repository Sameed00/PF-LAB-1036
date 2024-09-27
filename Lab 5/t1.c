#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float fatpercent, calories,fat, fatcal;
	
	do{
		printf("Enter total calories in your food: \n");
		scanf("%f",&calories);
		printf("Enter amount of fat grams in your food:  \n");
		scanf("%f",&fat);
	}
	while ((calories<0 && fat<0) && (calories<fat) );
	fatcal = fat * 9;
	fatpercent = (fatcal/calories) * 100; 
	printf("There are %.2f %% calories from fat in your food\n",fatpercent);	
	
	return 0;
}
