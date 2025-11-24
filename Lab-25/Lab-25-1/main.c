#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, ".UTF-8");

    int m = 1+rand()%10;

    printf("Угадайте число\n> ");

    int k;
    scanf("%d", &k);

    if (k == m) {
        printf("Вы угадали!\n");
        } else {
            printf("Вы не угадали :(\n");
            }

    return 0;

}