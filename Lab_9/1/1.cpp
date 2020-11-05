#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int A[10][10], n = 9, counter = 1, k;
int main() {
	/*for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			A[j][i] = counter;
			counter++;
		}
	}*/
	int shift = 0;
	if (n % 2 == 1)A[n / 2][n / 2] = n * n;
	k = (n % 2 == 1) ? n / 2 + 1 : n / 2;

	// General cycle
	for (int i = 0; i < k; ++i) {

		// Cycles for left part
		for (int j = shift; j < shift + 1; ++j) {
			for (int l = shift; l < n - 2 * shift+1; l++) {
				A[l][j] = counter;
				counter++;
			}
		}
		shift++;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << A[i][j] << " ";
		cout << endl;
	}
}