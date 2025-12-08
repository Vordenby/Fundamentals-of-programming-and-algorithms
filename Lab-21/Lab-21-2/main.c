#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

typedef struct Cornice
{
    int LENGTH;
    int CEILING_WIDTH;
    int WALL_HEIGHT;
    char MATERIAL[20];
} cornice_;


cornice_* Search_Material(cornice_ *corncices, int SIZE, char* MATERIAL) {

    for (int i = 0; i < SIZE; i++) {

        if (strcmp(corncices[i].MATERIAL, MATERIAL) == 0) return (corncices+i);

    }

    return NULL;

}


void Fill_Array(cornice_ *arr, int size) {

    puts("Все измерения в мм");

    for (int i = 0; i < size; i++) {

        printf("Карниз №%d\n", i+1);
        printf("Длина: ");
        scanf("%d", &arr[i].LENGTH);
        puts("");
        printf("Ширина по потолку: ");
        scanf("%d", &arr[i].CEILING_WIDTH);
        puts("");
        printf("Высота по стене: ");
        scanf("%d", &arr[i].WALL_HEIGHT);
        puts("");
        printf("Материал: ");
        scanf("%s", &arr[i].MATERIAL);
        puts("");
    }

}




int Compare(const void *A, const void *B) {

    const cornice_ *Corn_A = (const cornice_ *)A;
    const cornice_ *Corn_B = (const cornice_ *)B;

    int Area_A = Corn_A -> LENGTH * Corn_A -> CEILING_WIDTH;
    int Area_B = Corn_B -> LENGTH * Corn_B -> CEILING_WIDTH;

    if (Area_A < Area_B) return -1;
    
    if (Area_A > Area_B) return 1;

    return 0;

}

void Print_Cornice(cornice_ cornice) {
    printf("| %5d || %5d || %5d || %20s |", cornice.LENGTH, cornice.CEILING_WIDTH, cornice.WALL_HEIGHT, cornice.MATERIAL);

}


int input_file(char* filename, cornice_* corn) {

    FILE* out;

    in = fopen(filename, "rt");

    if (in == NULL) {
        printf("Ошибка чтения файла!");
        return -20;
    }

    while (!feof(in))
    {
        if (fscanf(in, "%d %d %d %19s", &corn->LENGTH, &corn->CEILING_WIDTH, &corn->WALL_HEIGHT, corn->MATERIAL) == 4) {

            i++;

        } else break;
    }
    fclose(in);

    return i;
    

}



int main(void) {

    setlocale(LC_ALL, ".UTF-8");

    int SIZE;
    printf("Количество вводимых карнизов: ");
    scanf("%d", &SIZE);

    cornice_ *corns;
    corns=(cornice_ *)malloc(SIZE * sizeof(cornice_));

    int CHOOSE;

    while (CHOOSE != 1 && CHOOSE != 0)
    {
        switch (CHOOSE)
        {

            puts("Выберите метод ввода информации \n (1 - Вручную) (2 - Из файла)");
            scanf("%d", &CHOOSE);

            case 1:
                Fill_Array(corns, SIZE);
                break;

            case 2:
                char fname[20];
                puts("Укажите файл для чтения ");
                scanf("%s", fname);
                input_file(fname, corns);
    
            default:
                puts("Неверный ввод!");
        }
    }
    

    for (int i = 0; i < SIZE; i++) {

        Print_Cornice(corns[i]);
        printf("\n");

    }

    puts("");

    qsort(corns, SIZE, sizeof(cornice_), Compare);

    puts("Таблица после сортировки: ");

    for (int i = 0; i < SIZE; i++) {

        Print_Cornice(corns[i]);
        printf("\n");

    }


}