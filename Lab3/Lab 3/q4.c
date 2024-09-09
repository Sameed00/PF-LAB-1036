#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	const int distance = 2414;
	const int tripA = 118;
	const int tripB = 127;
	float fuel_avg, fuel_costA, fuel_costB, total_cost, total_fuel;
	
	do {
	
	printf("Enter your car's fuel average in positive: ");
	scanf("%f",&fuel_avg);
}	while (fuel_avg < 0);
	
	total_fuel = distance/fuel_avg;
	fuel_costA = 118 * (total_fuel/2);
	fuel_costB = 127 * (total_fuel/2);
	total_cost = fuel_costA + fuel_costB;
	printf("Your fuel cost for trip A is: %.2f \nYour fuel cost for trip B is: %.2f \nYour total fuel cost is: %.2f \nYour total fuel consumed is: %.2f", fuel_costA,fuel_costB,total_cost,total_fuel);
	
	
	return 0;
}
