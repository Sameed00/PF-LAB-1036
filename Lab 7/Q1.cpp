#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,num,temp;
	int arr[6]={};
	
	for (i=0;i<6;i++)
	{
		printf("Enter number for element %d: \n",i+1);
		scanf("%d",&num);
		arr[i]=num;
	}
	for(i=0;i<6;i++)
	{
		for (j=0;j<6;j++)
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	arr[0]=arr[6];
	for (i=0;i<6;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
