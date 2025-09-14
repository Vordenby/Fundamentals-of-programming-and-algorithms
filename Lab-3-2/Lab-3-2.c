#include <stdio.h>
#define D 2.54

void main() {
    int dym; // eng inch = 2,54cm
    float result;

    printf("Введите размер (дюймы)\n");

    scanf("%d", &dym);

    result = D * dym;

    printf("%d дюймов - это %.1f см\n", dym, result);

}