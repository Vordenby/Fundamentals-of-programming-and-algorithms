#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

#define _USE_MATH_DEFINES
#include <math.h>

typedef double (*FuncPtr)(double);

#define EPS 1e-6 // 10^-6

double f1(double x) {

    return (sin(x*x + pow(x, -1) + cbrt(x)) * EPS)/tan((exp(cos(sqrt(fabs(x))))));

}

double f2(double x) {

    if (x > 3.61) {
        return exp(-(x+0.8)); 
        } else if (x >= 0) {
            return 1;
            } else {
                return 0.5*x;
                }

}

double f3(double x) {

    double sum = 0;

    for (int i = 1; i <= 10; i++ ) {
        sum+= cos(i*x)/i;
    }

    return sum;

}

void Print_Table(FuncPtr f, double a, double b, double step) {

    printf("\n      x\t\tf(x)\n");
    printf("------------------------\n");
    for (double x = a; x <= b; x += step) {
        printf("%10.3f\t%14.6e\n");
    }
}

void Write_To_txt(FuncPtr f, double a, double b, double step) {

    FILE *fp = fopen("dat.txt", "w");

    if (!fp) {
        printf("Ошибка открытия!");
        return;
    }

    for (double x = a; x <= b; x += step) {
        fprintf(fp, "%.6f\t%.6e\n");
    }
    fclose(fp);
    printf("Успешно записано!");

}

void Compute_File(FuncPtr f) {

    FILE *fp = fopen("dat.txt", "r");

    if (!fp) {
        printf("Файл не найден.");
    }

    double x, y;

    while (fscanf(fp, "%lf\t%lf", &x, &y) == 1) {
        printf("f(%.3f) = %.6e\n", x, y);
    }
    fclose(fp);

}

double Golden(FuncPtr f, double a, double b) {
    const double phi = (1 + sqrt(5)) / 2;

    double c, d;

    while (fabs(b - a) > EPS)
    {
        c = b - (b - a) / phi;
        d = a + (b - a) / phi;

        if (f(c) < f(d)) {
            a = c;
            } else {
                b = d;
            }
    }
    
    return (a + b) / 2;

}

void Describe_Func(FuncPtr f, double a, double b, double step) {

    double prev = f(a);
    int increasing = 0, decreasing = 0, ch_sign = 0;
    double prev_sign = (prev > 0) - (prev < 0);

    for (double x = a + step; x <= b; x+=step) {

        double y = f(x);

        if (y > prev) { 
            increasing++; 
            } else {
                decreasing++;
        }
        
        double sign = (y > 0) - (y < 0);

        if (sign != 0 && sign != prev_sign && prev_sign != 0) {
            ch_sign++;
        }

        prev = y;

        prev_sign = sign;

    }

    printf("Функция");

    if (increasing && !decreasing) {
        printf("возрастающая.\n");
        } else if (decreasing && !increasing) {
            printf("убывающая.\n");
            } else {
                printf("не монотонна.\n");
            }

            if (ch_sign > 0) {
                printf("Функция знакопеременная.\n");
                } else {
                printf("Функция одного знака.\n");
            }

            if (fabs(f(-b) - f(b)) < 1e-3) {
                printf("Функция симметрична.\n");
                } else {
                    printf("Функция несимметрична.\n");
            }

}


//Mass

typedef struct {
    double x;
    double y;
} Point;

void Make_Points(FuncPtr f, double a, double b, double step) {

    int n = (int)((b-a) / step) + 1;

    Point *arr = malloc(n*sizeof(Point));

    int i = 0;

    for (double x = a; x <= b; x += step) {

        arr[i].x = x;
        arr[i].y = f(x);

        i++;
        
    }

    printf("\nТочки:\n");
    for (int j = 0; j < n; j++) {

        printf("(%.3f, %.6e)\n", arr[j].x, arr[j].y);

    }

    free(arr);

}