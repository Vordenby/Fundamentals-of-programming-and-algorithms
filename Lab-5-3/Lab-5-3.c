#include <stdio.h>
#include <math.h>
#include <stdbool.h>

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

bool Uslovie_A(int A, int B) {
    
    if ( ( A % 2 == 0 && B % 2 != 0 ) || ( B % 2 == 0 && A % 2 != 0 ) ) {
        return true;
    }
    return 0;
}

bool Uslovie_B(int A, int B, int C) {

    if ( A % 3 == 0 && B % 3 == 0 && C % 3 == 0 ) { 
        return true; 
    }
    return 0;
}

int main() {
    
    float c = 1.3;
    float x, a, b, y;
    int Opt_A, Opt_B;

    scanf("%f", &x);

    a = A_Creator(c, x);
    b = B_creator(a, c);
    y = Y_creator(b, x);

    Opt_A = Uslovie_A((int)a, (int)b);
    Opt_B = Uslovie_B((int)a, (int)b, (int)y);

    printf("условие выполнено (1 - да, 0 - нет \na)\t%d\nв)\t%d\n)", Opt_A, Opt_B);

    return 0;
}