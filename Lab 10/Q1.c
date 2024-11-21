#include <stdio.h>

int recur_sum(int n){
	int result=0,temp;
	
	
	if(n==0){
		return 0;
	}
	else {
		
		return (n%10) + recur_sum(n/10);
	}
	
}

int main()
{
	int num,sum;
	
	printf("Enter a number: \n");
	scanf("%d",&num);
	
	sum = recur_sum(num);
	printf("Your sum is : %d",sum);
}
