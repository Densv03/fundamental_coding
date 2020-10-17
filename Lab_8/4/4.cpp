#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<iostream>
int n, A[20], sum;
int main() {

	/*
	// Getting random number
	srand(time(0));
	n = rand() % 1000 + 1;
	*/
	scanf("%d", &n);
	int k = 0;

	// Counting sum
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}

	// Filling in array with numbers from sum
	while (sum > 0) {
		A[k] = sum % 10;
		sum /= 10;
		k++;
	}

	//Ouputting reversed sum
	for (int i = 0; i < k; ++i)
		printf("%d", A[i]);
}