#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<ctime>
#include<iostream>
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int k;
	scanf("%d", &k);
	//srand(0);
	//k = rand() % 1000;
	if (k % 10 == 0 || k % 10 >= 5 || (k >= 11 && k <= 20))printf("%d грибов\n", k);
		else if (k % 10 == 1)printf("%d гриб\n", k);
		else if (k % 10 == 2 || k % 10 == 3 || k % 10 == 4)printf("%d гриба\n", k);
}