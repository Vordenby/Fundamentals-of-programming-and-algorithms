#include <stdio.h>
#include <locale.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int res = 2;

    for (int i=1; i < n; i++){
        res*=2;
    }

    if (res < 1024){printf("2^%d = %d\n", n, res);}
    else {float ress = (float)res; printf("2^%d = %.1fK\n", n, ress/1000);}
}