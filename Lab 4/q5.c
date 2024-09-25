#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a lowercase alphabet.", ch);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an uppercase alphabet.", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a digit.", ch);
    }
    else {
        printf("The character '%c' is a special character.", ch);
    }

    return 0;
}

