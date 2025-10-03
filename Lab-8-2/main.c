#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
    double x, y, w;
    printf("y = |e^w - 2| - x^2\nВведите через пробел значения w и x: "); 
    scanf("%lf %lf", &w, &x);

    y = fabs((exp(w) - 2)) - pow(x, 2);

    int tab;

    printf("Шаг табуляции: ");scanf("%d", &tab);

    
}