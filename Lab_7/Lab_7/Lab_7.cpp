#include<stdio.h>
#include<cmath>
float x, y;
int main() {
	printf("x  |  y\n");
	printf("-------\n");
	for (int i = 0; i < 4; ++i) {
		/*General cycle*/
		for (int j = 0; j < 4; j += 0.25) {
			/*Nested cycle*/
			if (j >= 0 && j <= 2)
				y = j;
			else if (j > 2 && j <= 3)
				y = j - 3;
			else if (j > 3 && j < 4)
				y = -1;
			printf("%f  |  %f\n", x, j);
				x += 0.25;
		}
	}
}