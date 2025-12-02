#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, ".UTF-8");

    int salary[18][12];
    int total = 0;
    
    srand(time(NULL));
    
    for (int i = 0; i < 18; i++)
        for (int j = 0; j < 12; j++)
            salary[i][j] = 30000 + rand() % 70001;
    
    for (int i = 0; i < 18; i++)
        total += salary[i][5];
    
    printf("Общая зарплата за июнь: %d руб.\n", total);
    
    return 0;
}
