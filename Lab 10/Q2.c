#include <stdio.h>
#include <string.h>

void reverse_string(char str[], int index, int length) {
    if (index >= length / 2) {
        return; 
    }


    char temp = str[index];
    str[index] = str[length - index - 1];
    str[length - index - 1] = temp;


    reverse_string(str, index + 1, length);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);


    int length = strlen(str);
    reverse_string(str, 0, length); 
    
    printf("Reversed string: %s\n", str);

    return 0;
}
