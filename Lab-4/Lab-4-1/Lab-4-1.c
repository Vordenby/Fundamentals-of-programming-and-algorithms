#include <stdio.h>
#include <math.h>

int main()

{

    char c;
    int i;
    float f;
    double d;

    printf("Введите c (char): "); scanf("%c", &c);
    printf("Введите i (integer): "); scanf("%d", &i);
    printf("Введите f (float): "); scanf("%f", &f);
    printf("Введите d (double): "); scanf("%e", &d);
    
    printf("%c, %d, %f, %e\n\n", c, i, f, d);
    //------------------------ subtask 1.a

    float f1;

    float f2 = modff(f, &f1);

    printf("%.0f | %f\n\n", f1, f2);
    
    //------------------------ subtask 1.b
    
    printf("Hex: %x | Oct: %o\n", (unsigned)c, (unsigned)c);

    //------------------------ subtask 1.c

    printf("%d", 1/i);

    return 0;
}