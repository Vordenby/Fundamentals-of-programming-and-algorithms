#include <locale.h>
#include <stdio.h>

#define N 10

void ReturnArray(float A[N], int B[N]) {
    printf("|index|Было|Стало|");
    for (int i = 0; i < N; i++){
        printf("|%d|%.1f|%d|", i, A[i], B[i]);
        }
}

int main(){
    
    setlocale(LC_ALL, ".UTF-8");

    float A[N]; int B[N];

    for (int i = 0; i<N; i++) {
        float temp;
        printf("a[%d] = ", i+1);
        scanf("%f", &temp);
        A[i] = temp;
        }
    
    for (int i = 0; i<N; i++) {
        B[i] = (int)A[i];
        }
    
    puts("\n\n");

    ReturnArray(A, B);

}