#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float gpa;
	
	printf("Enter your gpa: \n");
	scanf("%f",&gpa);
	
	(gpa < 0 || gpa >4 )? printf("Invalid gpa enterd "): 
	(gpa > 3.5? printf("Highest honors for semester"):
	(gpa > 3? printf("Deans list for semester"):
	(gpa > 2? printf("----"):
	(gpa > 1? printf("On probation for next semester"):
	printf("Failed semester- Registration suspended")))));
	
	return 0;
}
