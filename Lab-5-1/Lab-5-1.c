#include <stdio.h>
#include <math.h> -lm

#define M_PI 3.14159265358979323846
#define _USE_MATH_DEFINES

int main() {
    int grad;
    float gr;
    
    printf("Введите угол в градусах: ");
    scanf("%d", &grad);
    gr = (grad * M_PI)/180;

    double result = sin(gr);

    printf("%e", result);
}