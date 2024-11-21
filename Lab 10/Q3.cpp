# include <stdio.h>

void displayarray(int arr[],int x);
int main(){
	int x=9;
	int arr[10];
	for ( int i=0;i<10;i++){
		printf("enter:");
		scanf("%d",&arr[i]);
		
	}
	
	displayarray(arr,x);
	
}
void displayarray(int arr[], int x){
	if (x<0){
		
		
	}
	else{

		displayarray(arr,x-1);
				printf("%d\n",arr[x]);
		
		
	}
}
 


