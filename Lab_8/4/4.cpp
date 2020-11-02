#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<iostream>
int n, A[20], sum,num;
int main() {

	
	// Getting random number
	srand(time(0));
	n = rand() % 1000 + 1;
	
	//scanf("%d", &n);
	int k = 0;

	printf("n = %d\n", n);

	// Counting sum
	while (n > 0) {
		sum += n % 10;
		n /= 10;
		num++;
	}

	// outputting amoont of dights
	printf("Number of dights  = %d\n", num);

	// Filling in array with numbers from sum
	while (sum > 0) {
		A[k] = sum % 10;
		sum /= 10;
		k++;
	}

	// outputting reversed sum of digits
	printf("Reversed sum of digits = ");
	for (int i = 0; i < k; ++i)
		printf("%d", A[i]);
}