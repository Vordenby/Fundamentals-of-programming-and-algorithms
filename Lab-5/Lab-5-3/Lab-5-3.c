#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");
    
    double a, b, y;
    printf("Введите числа a, b, y: ");
    scanf("%lf %lf %lf", &a, &b, &y);
    
    int A = (int)a;
    int B = (int)b;
    int C = (int)y;
    
    int a1 = (A % 2 == 0);
    int a2 = (B % 2 == 0);
    int cond_a = a1 * (1 - a2) + (1 - a1) * a2;
    
    int b1 = (A % 3 == 0);
    int b2 = (B % 3 == 0);
    int b3 = (C % 3 == 0);
    int cond_b = b1 * b2 * b3;
    
    printf("Условие a: ");
    printf("условие выполнено (%d - да, 0 - нет)\n", cond_a);
    printf("Значение: %d\n", cond_a);
    
    printf("Условие b: ");
    printf("условие выполнено (%d - да, 0 - нет)\n", cond_b);
    printf("Значение: %d\n", cond_b);
    
    return 0;
}
