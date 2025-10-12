#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES
#define a -10


float F(float x, float y) {
    float impr_1 = (y + powf(fabsf(x), 0.5));
    float impr_2 = x - (y/(a + (powf(x, 2) / 4))); 

    return log(fabsf(impr_1*impr_2));

}

int main() {
    
    float X, Y;

    printf("Введите значение для X:");
    scanf("%f", &X);
    printf("Введите значение для Y:");
    scanf("%f", &Y);

    float result = F(X, Y);

    printf("%f\n", result);

    return 0;

}