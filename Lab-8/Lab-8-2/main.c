#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void) {

    setlocale(LC_ALL, ".UTF-8");

    double x1, x2, y, w;

    printf("y = |e^w - 2| - x^2\nВведите через пробел значения w и x1 x2: "); 
    scanf("%lf %lf %lf", &w, &x1, &x2);

    printf("\n|%10s | %12s|\n|", "x", "f(x)");
    for (int i = 0; i < 26; ++i) {
        putchar('-');
        } 
    printf("|\n");

    for (double x = x1; x <= x2; x += 0.5) 
    {
        y = fabs(exp(w) - 2) - pow(x, 2);
        printf("|%10.2lf | %12.2lf |\n", x, y);
        }
}