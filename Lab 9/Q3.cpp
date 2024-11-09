
#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
	
	if(is_prime(n)){
		printf("%d is Prime",n);
	}
	else{
		printf("%d is not Prime",n);
	}
}
