#include <stdio.h>
#include <math.h>

double sinus(int n) {
    double res = 0;
    for (int i = 0 ; i < n; i++){
        res = res + sinf(i);
    };
    return res;
}

double cosinus(int n) {
    double res = 0;
    for (int i = 0; i < n; i++){
        res = res + cosf(i);
    }
    return res;
}

int main(void){
    int n;
    scanf("%d", &n);

    double result = 0;

    for (int i = 3; i < n; i++){
        double coss = cosinus(n);
        double sinu = sinus(n);
        result = result + (coss/sinu);
    }
    
    printf("%lf\n", result);

    return 0;
}