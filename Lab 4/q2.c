#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num>0 && num%2 == 0 && num%10 == 0){
		printf("Number accepted");	}
	else {
		printf("Number rejected, try again");
	}
	
	
	
	
	return 0;
}
