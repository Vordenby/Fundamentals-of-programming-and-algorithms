#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){
    setlocale(LC_CTYPE, ".UTF-8");
    
    int n;
    scanf("%d", &n);
    
    if (n >= 1 && n <= 20) {
        if (n % 10 == 1 && n != 11) {
            printf("%d рубль", n);
        }
        else if ((n % 10 >= 2 && n % 10 <= 4) && !(n >= 12 && n <= 14)) {
            printf("%d рубля", n);
        }
        else {
            printf("%d рублей", n);
        }
    } else {
        int last_digit = n % 10;
        int last_two_digits = n % 100;
        
        if (last_digit == 1 && last_two_digits != 11) {
            printf("%d рубль", n);
        }
        else if (last_digit >= 2 && last_digit <= 4 && !(last_two_digits >= 12 && last_two_digits <= 14)) {
            printf("%d рубля", n);
        }
        else {
            printf("%d рублей", n);
        }
    }
    
    return 0;
}
