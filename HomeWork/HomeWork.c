#include <stdio.h>

int raschet(int summa, float proc) {
    float dohod, ProcToFloat;

    ProcToFloat = 0.01;

    dohod = summa * (ProcToFloat*proc);
    return dohod;
}

int main() {

    int summa, time;
    float proc, result;

    printf("Введите сумму вклада: "); scanf("%d", &summa);
    printf("Введите процентную ставку (с точностью .00): "); scanf("%f", &proc);
    printf("Введите время, насколько долго вы держите вклад: "); scanf("%d", &time);

    result = summa;

    for (int i = 0; i < time; i++) {
        result = result + raschet(summa, proc);
    }

    printf("К концу %d года сумма будет составлять: %.2f\n Выручка: %.2f\n", result, result-summa);

}