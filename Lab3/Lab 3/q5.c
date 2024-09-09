#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	float P, R, T, I;
	do {
		printf("Enter principal value between 100Rs to 1,000,000Rs: ");
		scanf("%f", &P);
	}while (P<100 || P>1000000);
	
	do{
		printf("Enter rate of interest between 5%% to 10%%, without the %% sign: ");
		scanf("%f", &R);
	}while (R<5 || R>10);
	
	do{
		printf("Enter time period in years from 1 to 10 years: ");
		scanf("%f",&T);
	}while (T<1 || T>10);
	
	I = (P) * (R/100) * (T) /100 ;
	printf("Your simple interest is: %.2f", I);
	
	
	
	
	return 0;
}
