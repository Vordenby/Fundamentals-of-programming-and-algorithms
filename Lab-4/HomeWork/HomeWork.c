#include <stdio.h>
#include <locale.h>

int main()

{
    int A, B, C, D;
    printf("Через пробел вводите значения (0 - False, 1 - True) датчиков A B C D: ");
    scanf("%d %d %d %d", &A,&B,&C,&D);

    int condition = A + B + C + D > 2;

    printf("Статус сигнализации (1 - вкл. запись 0 - выкл. запись): %d\n", condition);

    return 0;
}