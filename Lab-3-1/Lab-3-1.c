#include <stdlib.h>
#include <stdio.h>

void main() {
    int a, b;

    puts("Введите 1 число");

    scanf("%d", &a);

    puts("Введите 2 число");

    scanf("%d", &b);

    printf("Сумма 2 на 1 число: %d\nРазность 2 на 1 число: %d\nПроизведение 2 на 1 число: %d\n Частное 2 на 1 число: %d\n Остаток от деления 2 на 1 число: %d\n", b+a, b-a, b*a, b/a, b%a);
}