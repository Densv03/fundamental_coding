#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;
int main() {
	int A[10][10], n = 9;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			A[i][j] = j;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << A[i][j];
		cout << endl;
	}
}