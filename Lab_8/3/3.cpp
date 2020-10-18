#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<iostream>
#include<Windows.h>
#include<utility>

using namespace std;
int n, k, B[100],pos,t;
pair <int, bool>A[100];
char action;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));

	printf("Введите количество элементов в массиве: ");
	scanf("%d", &n);
	while (n == 0) {
		printf("Введены некорректные данные. Попробуйте ещё раз: ");
		scanf("%d", &n);
	}

	printf("Введите элементы массива: ");
	for (int i = 0; i < n; ++i)
		scanf("%d", &A[i].first);

	printf("Введите действие (+ если хотите добавить элементы, - если удалить) ");
	scanf("%s", &action);
	if (action == '+') {
		printf("Сколько элементов хотите добавить? ");
		scanf("%d", &k);
		printf("В какое место хотите вставить элементы? ");
		scanf("%d", &pos);
	}

	else if (action == '-') {
		printf("Сколько элементов хотите удалить? ");
		scanf("%d", &k);
		printf("С какого элемента хотите начать удаление? ");
		scanf("%d", &pos);
		while (k > n) {
			printf("Введены некорректные данные. Попробуйте ещё раз: ");
			scanf("%d", &k);
		}
		A[pos - 1].second = 1;
		A[pos + k - 2].second = 1;
		bool u1 = false, u2 = false;
		for (int i = pos - 1; i < pos + k - 2; ++i)
			A[i].second = 1;
		for (int i = 0; i < n; ++i) {
			if (A[i].second == 0) {
				B[t] = A[i].first;
					t++;
			}
		}
		for (int i = 0; i < t; ++i)
			cout << B[i] << " ";
	}
}