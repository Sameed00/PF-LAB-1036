#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int ID, units;
	float surcharge, bill, finalbill, unitrate;
	
	
	printf("Enter your ID: \n");
	scanf("%d", &ID);
	printf("Enter units consumed: \n");
	scanf("%d", &units);
	
	if (units <= 199){
		bill = units * 16.20;
		unitrate = 16.20;
	}
	else if (units >= 200 && units <300){
		bill = units * 20.10;
		unitrate = 20.10;
	}
	else if (units >= 300 && units < 500){
		bill = units * 27.10;
		unitrate = 27.10;
	}
	else if (units >= 500){
		bill = units * 35.90;
		unitrate = 35.90;
	}
	
	if (bill > 18000){
		surcharge = 0.15 * bill;
		finalbill = surcharge + bill;
	}
	else {
		finalbill = bill;
		surcharge = 0;
	}
	
	printf("Customer ID: %d \n", ID);
	printf("Units consumed: %d \n", units);
	printf("Amount charges @Rs.%.2f per unit: %.2f \n", unitrate, bill);
	printf("Surcharge Amount: %.2f \n", surcharge);
	printf("Net amount paid by the customer: %.2f", finalbill );
	return 0;
}
