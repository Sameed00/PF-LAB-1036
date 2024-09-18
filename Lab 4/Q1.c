#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num%3 == 0)
	{ printf("This number is a multiple of 3");
	}
	else 
	{ printf("This number is not a multiple of 3");
	}
	return 0;
}
