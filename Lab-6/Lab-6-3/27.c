#include <stdio.h>

int choose(float x){
    if ( x >= 100 ) {
        return 1;
    }
    else if ( x <= 0 ) {
            return 2;
    }
    else {
        return 0;
    }
}

int main(){

    float x;
    printf("Введите температуру воды: "); scanf("%f", &x);

    int choosed = choose(x);

    switch (choosed)
    {
    case 1:
    printf("Вода в газообразном состоянии (пар).\n");
    break;

    case 2:
    printf("Вода в твёрдом состоянии (лёд).");
    break;
    
    default:
        printf("Вода в жидком состоянии.");
        break;
    }

    return 0;
}