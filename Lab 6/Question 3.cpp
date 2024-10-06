#include <stdio.h>

int main()
{
    int n, i, ans = 1, t1 = 0, t2 = 1, nextTerm = 0;

    do{
	
    printf("Enter a number: \n");
    scanf("%d", &n);
	} while (n == 0);

    for (i = 2; i < n; i++)
    {
        ans = n % i;
        if (ans == 0)
        {
            printf("%d is not a prime number! \n", n);
            break;
        }
    }

    if (ans != 0)
    {
        printf("%d is a prime number! \n", n);
        printf("Fibonacci series up to %d:\n", n);

        
        nextTerm = t1 + t2; 

    	if (n == 0){
    		printf("%d\n", t1);
    		
		}    
        printf("%d, %d", t1, t2);

        
        while (nextTerm <= n)
        {
            printf(", %d", nextTerm);
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
        printf("\n");  
    }

    return 0;
}

