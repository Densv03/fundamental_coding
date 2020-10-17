#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<iostream>
#include<Windows.h>
using namespace std;
int n, A[100], k, B[100],pos;
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
		scanf("%d", &A[i]);
	printf("Введите действие (+ если хотите добавить элементы, - если удалить) ");
	scanf("%s", &action);
	if (action == '+') {
		printf("Сколько элементов хотите добавить? ");
		scanf("%d", &k);
		printf("В какое место хотите вставить элементы?");
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
	}
}