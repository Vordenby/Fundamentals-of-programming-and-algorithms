#include <stdio.h>
#include <math.h>
#include <locale.h>

double F1(double x) {

    if (x <= 3 ) {
        return pow(x, 2) - (3*x) + 9;
    } else { 
        return 1/(pow(x, 3) + 3); }

}

double F2(double x) {

    return x * exp(sin(pow(x, 2)));

}

int choosing(){
    char c;

    printf("1) F1\n2) F2\n3) F1^2 - F2^2\n4) (F1+F2)*2\n5) F1 * F2\nВыберете вычисление: "); scanf(&c);

    switch (c)
    {
    case '1':
        return 1;
        break;
    
    case '2':
        return 2;

    case '3':
        return 3;
    
    case '4':
        return 4;

    case '5':
        return 5;

    default:
        printf("Не был введён ни один из вариантов!");
        return 0;
    }
}

int main()
{

    setlocale(LC_ALL, ".UTF-8");

    double x;
    int chosen = 0;

    printf("Введите x: "); scanf("%lf", &x);


    while (chosen == 0)
    {
        chosen = choosing();
    }
    
    if (chosen == 1) {
        printf("f1 = %lf", F1(x));
        } else if (chosen == 2) {
            printf("f2 = %lf", F2(x));
            } else if (chosen == 3) {
                printf("f1^2 - f2^2 = %lf", pow(F1(x), 2), pow(F2(x), 2));
                } else if (chosen == 4) {
                    printf("(f1 + f2) * 2 = %lf", (F1(x) + F2(x))*2);
                    } else {
                        printf("f1 * f2 = %lf", F1(x)*F2(x));
                        }
    
    return 0;

}