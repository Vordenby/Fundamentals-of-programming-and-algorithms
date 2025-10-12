#include <stdio.h>
#include <locale.h>

int main(void){
    int m, n;

    setlocale(LC_ALL, ".UTF-8");

    scanf("%d %d", &m, &n);

    int s = 0;
    int k = 1;
    for (int i = m; i >= n; i--){
        s+=i;
        printf("Выполнено %d раз(a).\n", k++);
    }
    printf("%d \n", s);
}