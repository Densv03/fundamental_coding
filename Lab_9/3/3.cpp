#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<ctime>
using namespace std;
int main() {
	int n, m, o, p, checker=0,A[50][50],B[50][50],C[50][50];
	printf("Do you want to enter matrix size from keyboard? Enter either 1 if you want or 2 if you don't: ");
	scanf("%d", &checker);
	if (checker == 1) {
		printf("Enter first matrix size (all sizes must be less than 30)\nEnter m: ");
		scanf("%d", &m);
		printf("Enter n: ");
		scanf("%d", &n);
		printf("Enter second matrix size (all sizes must be less than 30)\nEnter o: ");
		scanf("%d", &o);
		printf("\nEnter p: ");
		scanf("%d", &p);
		while (n != o || m>30 || n>30 || o>30 || p>30) {
			printf("You entered incorrect sizes. Try again\nEnter first matrix size (all sizes must be less than 30) \nEnter m: ");
			scanf("%d", &m);
			printf("Enter n: ");
			scanf("%d", &n);
			printf("Enter second matrix size (all sizes must be less than 30)\nEnter o: ");
			scanf("%d", &o);
			printf("Enter p: ");
			scanf("%d", &p);
		}
		printf("Enter first array elements: ");
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &A[i][j]);
		printf("Enter second array elements: ");
		for (int i = 0; i < o; ++i)
			for (int j = 0; j < p; ++j)
				scanf("%d", &B[i][j]);
	}
	else {
		srand(time(0));
		m = rand() % 10 + 1;
		n = rand() % 10 + 1;
		o = n;
		p = rand() % 10 + 1;
		printf("Generates matrix sizes are:\nm = %d\nn = %d\no = %d\np = %d\n", m, n, o, p);
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				A[i][j] = rand() % 30 + 1;
		for (int i = 0; i < o; i++)
			for (int j = 0; j < p; ++j)
				B[i][j] = rand() % 30 + 1;
		printf("First matrix that we have:\n");
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j)
				printf("%d ", A[i][j]);
			printf("\n");
		}
		printf("Second matrix that we have:\n");
		for (int i = 0; i < o; ++i) {
			for (int j = 0; j < p; ++j)
				printf("%d ", B[i][j]);
			printf("\n");
		}
	}
}