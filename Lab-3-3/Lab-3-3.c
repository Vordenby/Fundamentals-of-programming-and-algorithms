#include <stdio.h>

void putchars(char c, int count){
    for (int i = 0; i < count; i++){putchar(c);}
}

int main()
{
    int a, b;

    int FLength;
    
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);

    if (a/10 > 0 && b/10 > 0) {FLength = a/10 + b/10 + 1;}
    else if ((a/10 > 0 && b/10 == 0)||(b/10 > 0 && a/10 == 0)) {FLength = a/10 + 2;}
    else {FLength = 3;}
    


    printf("%d\n", FLength);

    printf("|");putchars('-', (FLength*3)+2);printf("|\n");
    printf("|a*b|a+b|a-b|\n");
    printf("|");putchars('-', (FLength*3)+2);printf("|\n");
    printf("|%d*%d|", a, b); printf("%d+%d", a, b); printf("|%d-%d|\n", a, b);
    printf("|");putchars('-', (FLength*3)+2);printf("|\n");
    printf("|%d", a*b);putchars(' ',(a*b)/10);printf("|%d", a+b);putchars(' ', (a+b)/10+1);printf("|%d", a-b);putchars(' ',(a-b)/10+1);printf("|\n");

}