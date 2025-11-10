#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define _USE_MATH_DEFINES
#define N 100

double f(double x, double w) {
    return fabs(exp(w) - 2) - pow(x, 2);
}

int main(void) {

    double B[N], mid, nakpm;

    short int count, count_plus, count_minus;

    count = 0; count_plus = 0; count_minus = 0;

    for (double i = 1.0; i < 3.0; i+=0.1) {

        double temp = f(i,i);

        B[count] = temp;
        if (temp > 0) {
            mid += temp;
            count_plus+=1;
            } else {
                nakpm += temp;
                count_minus += 1;
                } 

        count+=1;
        if (count == N) {
            break;
        }

    }

    double midf = mid/count_plus;

    printf("B[%d]\n%lf | %lf\n%hd | %hd\n%lf", N, mid, nakpm, count_plus, count_minus, midf);
        
    return 0;
}