#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {
    double x1, x2, y, w;
    printf("y = |e^w - 2| - x^2\nВведите через пробел значения w и x1 x2: "); 
    scanf("%lf %lf %lf", &w, &x1, &x2);

    printf("\n______________\n");
    printf("|  x  | f(x) |\n");
    printf("______________\n");

    for (double x = x1; x <= x2; x++) {
        y = fabs(exp(w) - 2) - pow(x, 2);
        printf("| %.2lf | %.2lf |\n", x, y);
    }
}