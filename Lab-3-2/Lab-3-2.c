#include <stdio.h>
#define Eng 2.54
#define Spain 2.32166
#define StarLit 2.7076

int choosing_number() {
    int K;
    printf("Какой дюйм вы выбираете?\n (1 - английский) \n (2 - Испанский) \n (3 - Старолитовский) ");
    scanf("%d", K);
    return K;
    }

void main() {
    
    int dym, choose; // eng inch = 2,54cm
    float result;

    printf("Введите размер (дюймы)\n");
    scanf("%d", &dym);

    choose = 0;

    while (choose != 1 || choose != 2 || choose !=3) 
    {
        choose = choosing_number();

        if (choose == 1) 
        {
            result = Eng * dym;
        }
        else if (choose == 2)
        {
            result = Spain * dym;
        }
        else if (choose == 3)
        {
            result = StarLit * dym;
        }
    };
    
    
    

    printf("%d дюймов - это %.1f см\n", dym, result);

}