﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
int main() {
	float n /*= 10*/, sum = 0;
	printf("Enter number: ");
	scanf("%f", &n);
	for (int i = 1; i <= n; ++i) {
		sum += ((pow(-1, n)) * ((n + 1) / (n * n + 1)));
		//printf("%f\n", sum);
	}
	printf("%.6f", sum);
}