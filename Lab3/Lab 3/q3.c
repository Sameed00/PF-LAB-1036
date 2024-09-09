#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double taxrate;
	double salary;
	double taxpay;
	double newsalary;
	
	printf("Enter your salary: ");
	scanf("%lf", &salary);
	printf("Enter tax rate, for example enter 5 for 5%% : ");
	scanf("%lf", &taxrate);
	taxpay = (taxrate/100.0 ) * salary;
	newsalary = salary - taxpay;
	printf("The tax you have to pay is: %.2f \nYour salary after tax deduction is: %.2f",taxpay,newsalary);
	
	
	
	
	return 0;
}
