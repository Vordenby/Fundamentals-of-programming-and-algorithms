// 27

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, ".UTF-8");

    int n;
    printf("Введите n\n> ");scanf("%d", &n);
    
    int A[n], ind; 
    int temp = 1;

    for (int i = 0; i < n; i++) {
        printf(">");scanf("%d", &temp);
        A[i] = temp;
    }

    temp = 1;
    
    ind = 0;

    for (int i = 0; i < n-1; i++) {

        if (A[ind] >= A[i+1]) {
            ind = i+1;
        }
    }
    for (int i = ind+1; i < n; i++) {

        temp *= A[i];
    }

    printf("\n%d", temp);

    return 0;
}