#include <stdio.h>

void choose(float x){
    if ( x >= 100 ) {
        printf("Вода в газообразном состоянии (пар).\n");
    }
    else if ( x <= 0 ) {
        printf("Вода в твёрдом состоянии (лёд).");
    }
    else {
        printf("Вода в жидком состоянии.");
    }
}

int main(){

    float x;
    printf("Введите температуру воды: "); scanf("%f", &x);

    choose(x);

    return 0;
}