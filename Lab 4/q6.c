#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float cost, discount, total;
	
	printf("Enter your total bill: ");
	scanf("%f", &cost);
	
	if (cost >= 500 && cost < 2000){
		discount = 0.5 * cost;
		total = 0.95 * cost;
		}
	else if (cost >= 2000 && cost <= 4000){
		discount = 0.1 * cost;
		total = 0.9 * cost;
	}
	else if ( cost > 4000 && cost <= 6000){
		discount = 0.2 * cost;
		total = 0.8 * cost;
	}
	else if (cost > 6000){ 
		discount = 0.35 * cost;
		total = 0.65 * cost;
	}
	else if (cost<500){
		printf("You do not qualify for a discount \n");
		total = cost;
	}
	
	printf("Your actual bill was: %.2f \nYou saved: %.2f \nYou have to pay: %.2f" , cost, discount, total);
	return 0;
}
