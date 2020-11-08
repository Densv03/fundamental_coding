#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int A[10][10], n = 9, counter = 1, k;
int main() {
	int shift = 0;
	if (n % 2 != 0)A[n / 2][n / 2] = n * n;
	// General cycle
	for (int h = 0; h < n / 2; ++h) {
		// Filling in left side

		for (int i = shift; i < n - shift; ++i) {
			int j = shift;
			A[i][j] = counter;
			counter++;
		}
		// Filling in bottom


		shift++;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << A[i][j] << " ";
		cout << endl;
	}
}