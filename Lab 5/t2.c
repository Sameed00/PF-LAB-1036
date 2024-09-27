#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char weekday, vacation;
	
	printf("Is it a weekday? Press Y for yes and N for no: ");
	scanf(" %c", &weekday);
	printf("Is it a vacation? Press Y for yes and N for no: ");
	scanf(" %c", &vacation);
	if (weekday == 'N' || vacation == 'Y'){
		printf("Sleep in is True");
	}
	else {
		printf("Sleep in is False");
	}
	
	
	return 0;
} 
