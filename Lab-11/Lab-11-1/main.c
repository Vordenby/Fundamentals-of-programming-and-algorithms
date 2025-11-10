#include <stdio.h>
#include<locale.h>
#include<stdlib.h>

#define N 10

int main(void) {

    setlocale(LC_ALL, ".UTF-8");

    float A[N], temp, mid;

    for(int i=0; i<N; i++) {
        printf("a[%d] = ", i+1);
        scanf("%f", &temp);

        A[i]=temp;
        
        mid += temp;

    }

    printf("8 задача:\n");
    
    int B[N];

    printf("|индекс|исходное значение|новое значение|\n");


    for (int i = 0; i < N; i++) {

        B[i] = (int)A[i];
        printf("|%6d|%2.15f|%14d|\n", i, A[i], B[i]);

    }

    printf("\nСреднее арифметическое: %f", mid/N);

}