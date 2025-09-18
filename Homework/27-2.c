#include <stdio.h>
#include <math.h>

#define MATH_PI 3.141592653589793

float F(double x) {

    float Exp_1 = pow(sin((3*MATH_PI) - (2*x)), 2);
    float Exp_2 = pow(sin((5*MATH_PI) + (2*x)), 2);

    return 0.25*Exp_1*Exp_2;

}

int main(){

    float X;

    scanf("%f", &X);
    double result = F(X);

    printf("%e\n", result);

    return 0;

}