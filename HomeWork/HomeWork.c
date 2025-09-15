#include <stdio.h>

int main() {

    int x, a, result;

    printf("Введите зарплату работника: ");
    scanf("%d", &x);

    printf("\nВведите кол-во часов работы: ");
    scanf("%d", &a);

    if (a < 38) { result = a*x; }
    else { result = 38*x + (a-38)*(x*1.5); }

    printf("Ответ: %d\n", result);

    return 0;
}