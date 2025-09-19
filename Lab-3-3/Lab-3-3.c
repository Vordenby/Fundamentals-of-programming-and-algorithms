#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES


void putchars(char c, int count){
    for (int i = 0; i < count; i++){putchar(c);}
}

int Num_Of_Int(int integer) {
    float res = floorf(log10f(abs(integer))) + 1;
    res = (int)res;
    return res;
}

int main()
{
    int a, b;

    int FLength;
    
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);

    FLength = Num_Of_Int(a) + 1 + Num_Of_Int(b);

    printf("|");putchars('-', (FLength*3)+2);printf("|\n");
    printf("|%*s|%*s|%*s|\n", FLength, "a*b", FLength, "a+b", FLength, "a-b");
    printf("|");putchars('-', (FLength*3)+2);printf("|\n");
    printf("|%*d|%*d|%*d|\n", FLength, a*b, FLength, a+b, FLength, a-b);
    printf("|");putchars('-', (FLength*3)+2);printf("|\n");
   
    return 0;

}