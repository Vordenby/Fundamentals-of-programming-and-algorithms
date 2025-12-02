#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define _USE_MATH_DEFINES
#define ROW 7
#define COL 7

void Show_Array(int array[ROW][COL]) {

    for (int i = 0; i < ROW; i++) {

        for (int j = 0; j < COL; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }


}

void Transpose(int array[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = i; j < COL; j++) {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
}
// 2.2 6)
double Sec_Task(int array[ROW][COL]) {
    double sum = 0;
    int count = 0;
    for (int j = 0; j < COL; j++) {
        if (array[3][j] % 3 == 0) {
            sum += array[3][j];
            count++;
        }
    }
    if (count == 0) return 0;
    return sum / count;
}


int Find_Pairs(int array[ROW][COL]) {
    int pr = 0;
    for (int i = 0; i < ROW; i++) {

        for (int j = 0; j < COL-1; j++) {

            if (array[i][j] == array[i][j+1]) {
                pr+=1;
            }

        }

    }

    return pr;

}

void Find_Max(int array[ROW][COL], int* max, int* max_i, int* max_j) {
    *max = array[0][0];
    *max_i = 0;
    *max_j = 0;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (array[i][j] >= *max) {
                *max = array[i][j];
                *max_i = i;
                *max_j = j;
            }
        }
    }
}


int main(void) {

    setlocale(LC_ALL, ".UTF-8");

    printf("Создание массива\n");

    int array[ROW][COL] = {
        {-5, -9, -2, 9, 3, -7, 6},
        {4, -9, 1, 7, -3, 10, -6},
        {-8, 5, 2, -4, 9, 0, -1},
        {7, -2, 3, 7, 3, 4, -5},
        {6, -10, 5, 9, 3, 8, -3},
        {9, 9, -6, 10, 1, -7, 4},
        {3, -8, 7, -2, 10, 5, -9}
    };

    printf("Массив:\n");Show_Array(array);
    Transpose(array);
    printf("\n\nТранспонированный массив:\n"); Show_Array(array);

    printf("\nСреднее арифметическое \nэлементов четвертой строки, кратных трем: %lf\n\n", Sec_Task(array));

    printf("Кол-во пар (по строкам): %d\n\n", Find_Pairs(array));

    int max_value, max_i, max_j;
    Find_Max(array, &max_value, &max_i, &max_j);
    printf("Максимальное: %d\n С координатами (i[%d]; j[%d])", max_value, max_i, max_j);


    return 0;
}
