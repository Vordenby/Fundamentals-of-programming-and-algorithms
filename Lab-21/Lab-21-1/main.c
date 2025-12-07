#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

typedef struct Cornice
{
    int Length;
    int CeilingWidth;
    int WallHeight;
    char Material[20];
} cornice_t;


void Fill_Array(cornice_t *arr, int size) {

    puts("Все измерения в мм");

    for (int i = 0; i < size; i++) {

        printf("Карниз №%d\n", i+1);
        printf("Длина: ");
        scanf("%d", &arr[i].Length);
        puts("");
        printf("Ширина по потолку: ");
        scanf("%d", &arr[i].CeilingWidth);
        puts("");
        printf("Высота по стене: ");
        scanf("%d", &arr[i].WallHeight);
        puts("");
        printf("Материал: ");
        scanf("%s", &arr[i].Material);
        puts("");
    }

}

void Print_Cornice(cornice_t cornice) {

    printf("| %5d || %5d || %5d || %20s |", cornice.Length, cornice.CeilingWidth, cornice.WallHeight,cornice.Material );

}

int main(void) {

    int SIZE;
    printf("Количество вводимых карнизов: ");
    scanf("%d", &SIZE);

    cornice_t *corns;
    corns=(cornice_t *)malloc(SIZE * sizeof(cornice_t));

    Fill_Array(corns, SIZE);

    for (int i = 0; i < SIZE; i++) {

        Print_Cornice(corns[i]);
        printf("\n");

    }

}