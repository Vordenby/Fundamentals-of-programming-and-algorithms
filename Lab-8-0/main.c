#include <stdio.h>

int main(void){
    int n; char c;
    scanf("%d %c", &n, &c);

    for (int i=0; i<n; i++){
        putchar(c);
    }
}