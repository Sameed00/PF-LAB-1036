#include <stdio.h>

int main()
{
	float sum=0,lastnum;
	int num,refnum;
	
	printf("Enter a number: \n");
	scanf("%d", &num);
	refnum = num;
	do
	{
		lastnum = num%10;
		num = num/10; 
		sum = sum + (lastnum * lastnum * lastnum);
	} while (num >=1);

	if (refnum == sum){
		printf("%d is an Armstrong number!\n", refnum);
	}	
	else {
		printf("%d is not an Armstrong number!\n", refnum);
	}
}
