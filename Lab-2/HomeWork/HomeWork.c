#include <stdio.h>
#include <locale.h>


int main() {

    int cookies = 40;
    int apples = 10;
    int candy = 20;

    setlocale(LC_CTYPE, "RU");

    int X, Y, Z, cost;

    printf("Введите кол-во конфет (в кг): ");scanf("%d", &X);
    printf("Введите кол-во печенья (в кг): ");scanf("%d", &Y);
    printf("Введите кол-во яблок (в кг): ");scanf("%d", &Z);

    int result = (candy * X) + (apples * Z) + (cookies * Y);
    printf("Общая цена: %d", result);

    return 0;

}