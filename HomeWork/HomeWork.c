#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "RU");

    int x, a, result;

    printf("Введите зарплату работника: ");
    scanf("%d", &x);

    printf("\nВведите кол-во часов работы: ");
    scanf("%d", &a);

    result = 38*x + (a-38)*(x*1.5);

    printf("Ответ: %d\n", result);

    return 0;
}