#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <clocale>
int main(void) {
    setlocale(LC_ALL,"Ru");
    char x, y, c;
    int UnitStateWord;
    printf("Введите координату х (0-63) >");
    scanf("%d",&x);
    printf("Введите координату у (0-63) >");
    scanf("%d", &y);
    printf("Введите цвет (0-15) >");
    scanf("%d", &c);
    UnitStateWord = ((unsigned int)x & 0x40) << 10;
    UnitStateWord |= ((unsigned int)y & 0x40) << 4;
    UnitStateWord |= c & 0x10;
    printf("\nСлово состояния устройства = %04x\n",UnitStateWord);
    return 0;
}