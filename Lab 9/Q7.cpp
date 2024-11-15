#include <stdio.h>
#include <string.h>

void sort(char arr[][100], int n) {
    char temp[100];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j][0] > arr[j + 1][0]) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

    printf("Sorted strings: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char arr[n][100];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    sort(arr, n);

    return 0;
}

