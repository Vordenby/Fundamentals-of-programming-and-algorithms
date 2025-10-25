#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){
    setlocale(LC_CTYPE, ".UTF-8");
    
    int N;
    scanf("%d", &N);
    
    if (N >= 1 && N <= 20) 
    {
        if (N % 10 == 1 && N != 11) 
        {
            printf("%d рубль", N);
            }
        else if ((N % 10 >= 2 && N % 10 <= 4) && !(N >= 12 && N <= 14)) 
        {
            printf("%d рубля", N);
            }
        else 
        {
            printf("%d рублей", N);
            }
    } else 
    {
        int last_digit = N % 10;
        int last_two_digits = N % 100;
        
        if (last_digit == 1 && last_two_digits != 11) {
            printf("%d рубль", N);
            }
        else if (last_digit >= 2 && last_digit <= 4 && !(last_two_digits >= 12 && last_two_digits <= 14)) {
            printf("%d рубля", N);
            }
        else {
            printf("%d рублей", N);
            }
        }
    
    return 0;
}
