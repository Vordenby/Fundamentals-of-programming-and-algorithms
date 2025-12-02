#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ROW 5
#define COL 5


void Show_Array(int array[ROW][COL]) {
    //1)
    for (int i = 0; i < ROW; i++) {

        for (int j = 0; j < COL; j++) {

            printf("%d ", array[i][j]);

        }
        printf("\n");
    }
}

int Min_in_Row(int row, int array[ROW][COL]) {
    int mn = array[row][0];
    for (int i = 1; i < COL; i++) {

        if (array[row][i] < mn) {

            mn = array[row][i];

        }

    }
    return mn;
}

int main(void) {


    setlocale(LC_ALL, ".UTF-8");


    int Array[ROW][COL];

    for (int i = 0; i < ROW; i++) {

        for (int j = 0; j < COL; j++) {

            Array[i][j] = i+j;

        }

    }
    Show_Array(Array);
    //4)
    printf("%d", Array[ROW-1][0]);

    //a)
    while (1)
    {
        int ROW_Choose;
        printf("Выберите нужную строку\n> ");scanf("%d", &ROW_Choose);
        if (ROW_Choose >= 1 && ROW_Choose < ROW+1) {

            printf("%d", Min_in_Row(ROW_Choose-1, Array));
            break;
        }
        else {printf("Вы вышли за диапазон доступных строк!");}
    }
    

    return 0;
}