#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n;
    int sum = 0;
    printf("Enter the Number you wanted to enter: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        arr[i] = i + 1;
        sum = sum + arr[i];
        
    }
    printf("The Sum is %d", sum);

    free(arr);
    return 0;

}
