#include <stdio.h>
#include <locale.h>
#include <math.h>



int main(void){

    setlocale(LC_CTYPE, "RUS");

    int n;
    scanf("%d", &n);

    int cond_a = n % 10 == 1;
    int cond_b = n < 20;
    int cond_c = n > 9;
    
    if (cond_a && cond_b)
    {
        printf("%d рубль", n);
        }
    else if (cond_b && cond_c)
    {
        printf("%d рублей", n);
        }
    else if (!cond_c && !cond_a)
    {
        printf("%d рубля", n);
        }
    else if (!cond_c && cond_a)
    {
        printf("%d рубль", n);
        }
    else if (!cond_b && !cond_a)
    {
        printf("%d рубля", n);
        }
}