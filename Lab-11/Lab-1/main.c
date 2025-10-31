#include <locale.h>
#include <stdio.h>

int main(){
    
    float A[10];

    for (int i = 0; i<10; i++) {
        float temp;
        printf("a[%d] = ", i+1);
        scanf("%f", &temp);
        A[i] = temp;
        }

}