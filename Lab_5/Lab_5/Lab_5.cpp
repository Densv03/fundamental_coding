#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float x, y;
	printf("Enter x: ");
	scanf("%f", &x);
	printf("Enter y: ");
	scanf("%f", &y);
	if (x > 1 || x < -1 || y>1 || y < -1) {
		printf("Point isn't in area");
		return 0;
	}
	else if (x >= 0) {
		if (x >= y) //OK
			printf("Point is in area");
		else 
			printf("Point isn't area");
	}
	else if (x <= 0) {
		if (y >= x) //not OK
			printf("Point is in area");
		else 
			printf("Point isn't area");
	}
}