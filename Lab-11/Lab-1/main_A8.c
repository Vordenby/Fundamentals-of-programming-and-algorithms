#include <locale.h>
#include <stdio.h>

void ReturnArrayFloat(float A[10]) {
    for (int i = 0; i < 10; i++){
        printf("%.1f, ", A[i]);
        }
}

void ReturnArrayInt(int A[10])  {
    for (int i = 0; i < 10; i++){
        printf("%d, ", A[i]);
        }
}

int main(){
    
    setlocale(LC_ALL, ".UTF-8");

    float A[10]; int B[10];

    for (int i = 0; i<10; i++) {
        float temp;
        printf("a[%d] = ", i+1);
        scanf("%f", &temp);
        A[i] = temp;
        }
    
    for (int i = 0; i<10; i++) {
        B[i] = (int)A[i];
        }
    
    printf("\n\n\nБыло: ");ReturnArrayFloat(A);
    printf("\n\n\nСтало: ");ReturnArrayInt(B);

}