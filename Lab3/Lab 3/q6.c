#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	const float y1 = 4;
	const float x1 = 5;
	const float y2 = 2;
	const float x2 = 3;
	float slope;
	slope = (y2-y1) / (x2-x1);
	
	printf("The slope between the two points is: %.3f", slope);
	
	return 0;
}
