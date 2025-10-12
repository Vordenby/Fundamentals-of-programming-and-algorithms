
#include <stdio.h>

int main(){

    float x, y;
    char c;

    scanf("%f%c%f", &x, &c, &y);
    
    switch (c)
    {
    case '+':
        printf("=%.2f", x+y);
        break;
    case '-':
        printf("=%.2f", x-y);
        break;
    case '/':
        printf("=%.2f", x/y);
        break;
    case '*':
        printf("=%.2f", x*y);
        break;
    default:
        break;
    }

}