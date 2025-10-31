#include <stdio.h>
#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>

void draw_triangle(char symbol, float angle, float Lo_side, int size_of_map) 
{

    printf("\n\n***********\n* DRAWING *\n***********\n\n");

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
                printf("%c ", symbol);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

float area_triangle(float first_side, float second_side, float angle) {

    if ((angle >= 90) || (angle <= 0)) 
        {
            printf("Ошибка: угол должен быть острым\n");
            return 0;
            }
    
    angle = angle * M_PI / 180.0;

    float result = 0.5 * first_side * second_side * sinf(angle);
    return result;

}

void define_of_triangle() {
    
    printf("ТРЕУГОЛЬНИК\n (остроугольный) \n--- геометрическая фигура, образованная тремя отрезками, которые соединяют три точки, не лежащие на одной прямой.\n У данных треугольников все углы - острые. ");
}

int main(void)
{
    setlocale(LC_ALL, ".UTF-8");

    printf("*********\n*FIGURES*\n*********\n\n\n");

    int ch;
    float first_side, second_side, angle;

    printf("Введите длину первой прилежащей стороны: ");scanf("%f", &first_side);
    printf("Введите длину второй прилежащей стороны: ");scanf("%f", &second_side);
    printf("Введите острый угол между ними: ");scanf("%f", &angle);

    printf("*Остроугольный треугольник*");

    printf("\nВыберите вариант:\n1) Рассчитать площадь\n2) Вывести определение фигуры\n3) Нарисовать фигуру\n"); scanf("%d", &ch);

    switch (ch) {
        
        case 1:
            float res = area_triangle(first_side, second_side, angle);
            printf("Ответ: %f", res);
            break;
        case 2:
            define_of_triangle();
            break;
        case 3:
            char symbol;
            int size_of_map;
            
            printf("Введите масштаб фигуры: ");scanf("%d", &size_of_map);
            printf("Введите символ, которым будет изображена фигура: "); scanf(" %c",&symbol);
            
            draw_triangle(symbol, angle, first_side,size_of_map);
            break;
        default:
            printf("Введен невозможный вариант.");
            break;
    }

    return 0;
}
