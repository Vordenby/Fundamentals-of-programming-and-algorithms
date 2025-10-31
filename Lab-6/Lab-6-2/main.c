#include <stdio.h>
#include <math.h>

int Exp_1(float x){
    return (x*x)+4*x+5;
}
int Exp_2(float x){
    return 1/Exp_1(x);
}


int main(){

    float x;
    scanf("%f", &x);

    float x_1 = Exp_1(x);
    float x_2 = Exp_2(x);

    printf("%.2f\n", (x > 2) ? x_2 : x_1);

    return 0;

}