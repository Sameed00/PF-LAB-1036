#include <stdio.h>
#include <stdlib.h>

int main() {
    char coffee, size, choice;
    float wstime, bstime, wdtime, bdtime;
    
    printf("Enter the coffee you want to have; B or b for Black, W or w for White: ");
    scanf(" %c", &coffee);
    printf("Enter size; S or s for single, D or d for double: ");
    scanf(" %c", &size);
    printf("Enter M or m if you want to make coffee manually, or A or a for auto: ");
    scanf(" %c", &choice);
    
    wstime = 15 + 15 + 20 + 2 + 4 + 20;
    bstime = 20 + 20 + 25 + 15 + 25;
    
    switch (coffee) {
        case 'W':
        case 'w':
            switch (size) {
                case 'S':
                case 's':
                    printf("Put water, wait for 15 mins \nAdd sugar, wait for 15 mins \nMix well and wait for 20 mins \nAdd coffee and wait for 2 mins \nAdd milk and wait for 4 mins \nMix well and wait for 20 mins.\n");
                    printf("Total time taken was: %.2f mins\n", wstime);
                    break;
                case 'D':
                case 'd':
                    printf("Put water, wait for 22.5 mins \nAdd sugar, wait for 22.5 mins \nMix well and wait for 30 mins \nAdd coffee and wait for 3 mins \nAdd milk and wait for 6 mins \nMix well and wait for 30 mins.\n");
                    wdtime = wstime * 1.5;
                    printf("Total time taken was: %.2f mins\n", wdtime);
                    break;
                default:
                    printf("Invalid size choice.\n");
            }
            break; 

        case 'B':
        case 'b':
            switch (size) {
                case 'S':
                case 's':
                    printf("Put water, wait for 20 mins \nAdd sugar, wait for 20 mins \nMix well and wait for 25 mins \nAdd coffee and wait for 15 mins \nMix well and wait for 25 mins.\n");
                    printf("Total time taken was: %.2f mins\n", bstime);
                    break;
                case 'D':
                case 'd':
                    printf("Put water, wait for 30 mins \nAdd sugar, wait for 30 mins \nMix well and wait for 37.5 mins \nAdd coffee and wait for 22.5 mins \nMix well and wait for 37.5 mins.\n");
                    bdtime = bstime * 1.5;
                    printf("Total time taken was: %.2f mins\n", bdtime);
                    break;
                default:
                    printf("Invalid size choice.\n");
            }
            break; 

        default:
            printf("Invalid coffee choice.\n");
    }
    
    return 0;
}

