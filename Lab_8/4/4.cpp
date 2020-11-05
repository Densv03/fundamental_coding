#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<iostream>
int n, n1, A[20], sum, num, answer,num1;
int difers(int z) {
	int k = 1;
	z--;
	while (z > 0) {
		k *= 10;
		z--;
	}
	return k;
}
int main() {

	
	// Getting random number
	srand(time(0));
	n = rand() % 1000 + 1;
	n1 = n;
	//scanf("%d", &n);
	int k = 0;

	printf("n = %d\n", n);

	// Counting sum
	while (n > 0) {
		sum += n % 10;
		n /= 10;
		num++;
	}
	printf("Cycle 1 completed\n");
	n = n1, num1 = num;
	while (n > 0) {
		answer += (n % 10) * difers(num1);
		n /= 10;
		num--;
	}
	// outputting amoont of dights
	printf("%d\n", answer);
	printf("Number of dights  = %d\n", num);

}