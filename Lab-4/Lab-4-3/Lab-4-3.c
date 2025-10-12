#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    printf("\na) %d\nb) %d\nc) %d\n", N%10, N/100, N/100 + N/10 - N/100*10 + N%10);

    printf("\n%d%d%d\n\n", N%10, N/10 - N/100*10, N/100);

    return 0;
}