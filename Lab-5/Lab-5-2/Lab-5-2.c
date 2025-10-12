#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

int Y_creator(float b, float x) {
    b = b * (-1);
    float res = exp(x) + pow(5.8, b);

    return res;

}

int B_creator(float a, float c) {
    float res = pow(a, 2)+ pow(c, 0.5);

    return res;

}

int A_Creator(float c, float x) {
    float res = pow(c, 3)+log10(fabs(x));

    return res;

}

int main() {
    
    float c = 1.3;
    float x, a, b, y;

    scanf("%f", &x);

    a = A_Creator(c, x);
    b = B_creator(a, c);
    y = Y_creator(b, x);

    printf("c) %f\nb) %f\na) %f\ny) %f\n", c, b, a, y);

    return 0;
}