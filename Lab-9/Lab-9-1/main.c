#include <stdio.h>

int main(void){
    int rows = 1;
    int n = 10;
    int k;
    scanf("%d", &k);
    printf("\n");
    for (int i = 0; i < k; i++){
        for (int i = 0; i < rows; i++){
            printf("%d ", n);
        }
        rows +=1;
        n+=10;
        printf("\n");
    }
}