#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES


struct point
{
    float x;
    float y;
    char name;
};

typedef struct point Point;


void Decart(Point z) {

    if (z.x > 0 && z.y > 0) {
        printf("Точка в I четверти.\n");
        } else if (z.x < 0 && z.y > 0) {
            printf("Точка во II четверти.\n");    
            } else if (z.x < 0 && z.y < 0) {
                printf("Точка в III четверти.\n");
                } else if (z.x > 0 && z.y < 0) {
                    printf("Точка в IV четверти.\n");
                    } else {
                        printf("Точка находится в центре системы координат.\n");
                    }

}


void put_point(Point z) {

    printf("%c[%.1f, %.1f]\n", z.name, z.x, z.y);
    Decart(z);

} 

float DistCalc(Point z, Point w) {

    Point res;
    res.x = w.x - z.x;
    res.y = w.y - z.y;

    float rast = sqrtf(pow(res.x, 2) + pow(res.y, 2));

    return rast;

}

Point Centre_Of_Vector(Point z, Point w) {

    Point Centre;
    Centre.name = 'C';

    Centre.x = (z.x + w.x)/2;
    Centre.y = (z.y +w.y)/2;

    return Centre;

}


int main() {

    Point b, a;

    a.name = 'A'; b.name = 'B';

    printf("Введите x y точки A\n> "); 
    scanf("%f %f", &a.x, &a.y);

    printf("Введите x y точки B\n> ");
    scanf("%f %f", &b.x, &b.y);

    float Distance = DistCalc(a, b);
    Point Centre = Centre_Of_Vector(a, b);

    printf("Даны точки\n");
    put_point(a); put_point(b);

    puts("\n");

    printf("Декартово расстояние:\n\t%.4f", Distance);

    puts("\n");

    printf("Точка центра отрезка AB:\n");
    put_point(Centre);

    return 0;

}