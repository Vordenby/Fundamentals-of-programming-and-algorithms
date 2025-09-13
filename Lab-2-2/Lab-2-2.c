#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main() {

    int N, K;
    
    N = 12;
    K = 30;

    printf("Сейчас %d часов %d минут\n", N, K);

    printf("Идет %d минута суток\n", K);

    printf("До полуночи осталось %d часов и %d минут\n", 23-N, 60-K);

    printf("С 8.00 прошло %d секунд\n", abs(8-N)*3600 + K*60);

    printf("Текущий час = %d/24 суток и текущая минута = %d/60 часа\n", N, K);

}