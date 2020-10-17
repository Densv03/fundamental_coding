#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<iostream>
#include<Windows.h>
#include<string>
#include<ctype.h>
using namespace std;

// Realizing functions to check is part full or not
bool full1(bool z[]) {
	for (int i = 0; i < 5; ++i)
		if (z[i] == 0)return false;
	return true;
}

bool full2(bool z[]) {
	for (int i = 5; i < 10; ++i)
		if (z[i] == 0)return false;
	return true;
}
bool A[10];
int n = 10, temp = 0;
int main() {
	// Initialization of Cirillic Alphabet
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	// Randomize
	srand(time(0));
	char ans[5];

	//Filling in array
	for (int i = 0; i < 10; ++i) {
		if ((rand() % 10 + 1) % 2 == 0)
			A[i] = 0;
		else
			A[i] = 1;
	}

	// Main part
	while (true) {
		if (full1(A) && full2(A))
			break;
		printf("Список мест: ");
		for (int i = 0; i < 10; ++i)
			cout << A[i] << " ";
		cout << endl;
		printf("Вы курите? ");
		scanf("%3s", ans);
		if (ans[0] == 'д' && ans[1] == 'а' || ans[0] == 'Д' && ans[1] == 'а' || ans[0] == '1') {
			temp = rand() % 5 + 1;
			if (!A[temp - 1]) {
				printf("Место было забронировано. Номер Вашего места: %d\n", temp);
				A[temp - 1] = 1;
			}
			else {
				if (!full1) { // Checking free places in 1-st part
					for (int i = 0; i < 5; ++i)
						if (A[i] == 0) {
							A[i] = 1;
							printf("Место было забронировано. Номер Вашего места: %d\n", i + 1);
						}
				}
				else
					printf("Мест в данной секции нет");
			}
		}
		else if (ans[0] == 'н' && ans[1] == 'е' && ans[2] == 'т' || ans[0] == 'Н' && ans[1] == 'е' && ans[2] == 'т' || ans[0] == '0') {
			temp = rand() % 5 + 5 + 1;
			if (!A[temp - 1]) {
				printf("Место было забронировано. Номер Вашего места: %d\n", temp);
				A[temp - 1] = 1;
			}
			else {
				if (!full2) {
					for (int i = 5; i < 10; ++i)
						if (A[i] == 0) {
							A[i] = 1;
							temp = i + 1;
							printf("Место было забронировано. Номер Вашего места: %d\n", temp);
						}
				}
				else
					printf("Мест в данной секции нет\n");
			}
		}
	}
}