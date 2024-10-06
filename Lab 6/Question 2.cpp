#include <stdio.h>

int main()
{
	int n,i,ans;
	
	printf("Enter a number: \n");
	scanf("%d",&n);
	
	for (i=2;i<n;i++)
	{
		ans = n%i;
		if (ans == 0)
		{
			printf("%d is not a prime number! \n", n);
			break;
		}
		
		
	}
	if (ans != 0)
	{
		printf("%d is a prime number! \n", n);
		
	}
}
