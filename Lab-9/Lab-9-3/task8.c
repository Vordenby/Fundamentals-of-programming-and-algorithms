#include <stdio.h>
#include <locale.h>

int input()
{
    float angle, side;
    char chars;

    printf("*********\n*FIGURES*\n*********\n\n\n");

    printf("Введите символ, которым будет изображена фигура: ");scanf("%c", chars);

    printf("Введите угол а (радианы): ");scanf("%f", angle);
    
    printf("Введите длину стороны (см): ");scanf("%f", side);

    return angle, side, chars;
    }

void construct(float angle, float side, char chars)
{
    
    

    }

int main(void)
{

    setlocale(LC_ALL, ".UTF-8");

    



    }