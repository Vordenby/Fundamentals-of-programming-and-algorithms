#include <stdio.h>
#include <locale.h>

typedef int bool;
#define true 1
#define false 0

int Is_Active(int a, int b, int c, int d) {
    if (a+b+c+d >= 3) { return true; }
    else { return false; }
}

void Check_Active(int a){
    if (a == 1){ printf("\n\n*** Запись сигнализации включена! ***\n\n"); }
    else { printf("\n\n Не о чем беспокоится! \n\n"); }
}


int main()

{
    bool A, B, C, D;
    printf("Через пробел вводите значения (0 - False, 1 - True) датчиков A B C D: ");
    scanf("%d %d %d %d", &A,&B,&C,&D);

    Check_Active(Is_Active(A, B, C, D));

    return 0;
}