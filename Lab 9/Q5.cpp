#include <stdio.h>
#include <string.h>

void reverse(char word[])
{
	
	int i,j=0,len;
	len = strlen(word);
	char reversed[len+1];
	for(i=len-1;i>=0;i--){
		reversed[j]=word[i];
		j++;
		
		
	}
	reversed[j]='\0';
	printf("Reversed word: %s",reversed);
	
}
int main()
{
	char word[100];
	printf("Enter your word: \n");
	gets(word);
	
	reverse(word);
}
