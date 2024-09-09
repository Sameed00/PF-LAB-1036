#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a;
	int b;
	int temp;
	
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("Your first number is now: %d \nYour second number is now: %d",a,b);
	return 0;
}
