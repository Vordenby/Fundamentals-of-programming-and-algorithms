#include <stdio.h>
#include <locale.h>


void draw_triangle(int angle, int Lo_side, char chars) 
{

    int size_of_map;

    printf("Введите масштаб фигуры: ");scanf("%d", &size_of_map);

    if ((angle >= 90) || (angle <= 0)) 
    {
        printf("Ошибка: угол должен быть острым\n");
        return;
    }
    
    if (Lo_side <= 0) 
    {
        printf("Ошибка: сторона должна быть положительной\n");
        return;
    }
    
    for(int i = 0; i < size_of_map; i++) 
    {
        for(int j = 0; j < size_of_map; j++) 
        {
            if (i >= j) 
            {
                printf("%c ", chars);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main(void)
{
    int angle, Lo_side;
    char symbol;

    setlocale(LC_ALL, ".UTF-8");

    printf("*********\n*FIGURES*\n*********\n\n\n");

    printf("Введите символ, которым будет изображена фигура: "); scanf("%c", &symbol);

    printf("Введите угол а (радианы): "); scanf("%d", &angle);
    
    printf("Введите длину стороны (см): "); scanf("%d", &Lo_side);

    draw_triangle(angle, Lo_side, symbol);

    return 0;
}
