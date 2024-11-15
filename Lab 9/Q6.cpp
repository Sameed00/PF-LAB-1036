#include <string.h>
#include <stdio.h>

void num(int arr[],int n)
{
	int i;
	int max=-999,min=999;
	
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}		
	}
	printf("Max and min in your array is: %d and %d",max,min);
}

int main()
{
	int i,n;
	
	
	printf("Enter number of elements: \n");
	scanf(" %d",&n);
	int arr[n];
	
	for (i=0;i<n;i++)
	{
		printf("Enter element %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	num(arr,n);
	
}
