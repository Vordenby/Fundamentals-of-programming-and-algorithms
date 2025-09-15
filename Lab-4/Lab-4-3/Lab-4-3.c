#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    printf("a) %d\nb) %d\nc) %d\n", N%10, N/100, N/100 + N%10 + (N%100 - N%10));

    return 0;
}