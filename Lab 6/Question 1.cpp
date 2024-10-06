#include <stdio.h>

int main()
{
	float n, sum=0;
	
	while (n != 0)
	{
		printf("Enter a number: \n");
		scanf("%f", &n);
		
		sum = sum + n;
		
		printf("Your sum is: %.2f \n", sum);
	
	}
}
