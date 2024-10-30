#include <stdio.h>

int main()
{
	int i,min,max,j;
	
	
	
	printf("Enter smallest and largest number for range: \n");
	scanf("%d%d",&min,&max);
	
	int counter[1000];
	for (i=0;i<1000;i++){
		counter[i]=0;
	}
	
	for (i=min;i<=max;i++){
		
		for(j=1;j<=i;j++){
			if (i%j==0){
				counter[i]++;
			}
		}
	}		
	for (i=min;i<=max-min+1;i++){
		if(counter[i]==2){
			printf("%d ",i);
		}
	}
}
