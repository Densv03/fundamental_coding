#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<Windows.h>
#include<iostream>
using namespace std;
int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char c; /* код состояния */
    char f; /* признак ошибки */
    char b; /* признак занятости */
    unsigned char n; /* количество байт */
    unsigned int UnitStateWord; /* слово состояния */
     /* ввод составных частей */
    printf("Введите код состояния (0 - 31) >");
    scanf("%d", &c);
    printf("Введите признак ошибки (0 / 1) >");
    scanf("%d", &f);
    printf("Введите признак занятости (0 / 1) >");
    scanf("%d", &b);
    printf("Введите количество переданных байт (0 - 255) >");
    scanf("%d", &n);
    /* формирование упакованного кода */

    UnitStateWord = ((unsigned int)c & 0x1F) << 11;
    //printf("%04x\n",UnitStateWord);
    cout << UnitStateWord << endl;
/*  UnitStateWord |= ((unsigned int)f & 1) << 9;
    UnitStateWord |= ((unsigned int)b & 1) << 8;
    UnitStateWord |= n & 0xFF;
    /* вывод результата */
    printf("\nСлово состояния устройства = %04x\n", UnitStateWord);
    return 0;
}