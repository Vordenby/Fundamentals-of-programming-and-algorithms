#include <stdio.h>
#include <locale.h>
#include <math.h>

int fst(int num)
{
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;

        for (int i = 1; i <= 9; i+=2) {
            if ( digit == i) {
                sum+=digit;
                break;
                }
            }
        num /= 10;
        }
    return sum;
    }

int main(void)
{

    int n;

    scanf("%d", &n);

    if (n < 0) { n*=-1; }

    int result = fst(n);

    printf("%d", result);

    return 0;
    }