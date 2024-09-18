#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char op;
	float num1;
	float num2;
	float ans;
	printf("Enter a number: ");
	scanf("%f", &num1);
	printf("Enter a number: ");
	scanf("%f", &num2);
	printf("Enter what calculation you want to do \nPress A for +, S for -, D for /, M for *");
	scanf(" %c", &op);
	
	switch(op){
		case 'A':
			ans = num1 + num2;
			printf("Your answer is: %.2f", ans);
			break;
			
		case 'S':
			ans = num1 - num2;
			printf("Your answer is: %.2f", ans);
			break;
			
		case 'D':
			ans = num1 / num2;
			printf("Your answer is: %.2f", ans);
			break;
			
		case 'M':
			ans = num1 * num2;
			printf("Your answer is: %.2f", ans);
			break;
		
		default:
			printf("Invalid entry");
					
	}
	
	
	return 0;
}
