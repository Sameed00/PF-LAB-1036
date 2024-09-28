#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	((num % 10) == 0 ? printf("Last digit is zero") : printf("Last digit not zero"));
	
	
	return 0;
}
