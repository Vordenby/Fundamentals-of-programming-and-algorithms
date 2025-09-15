#include <stdio.h>

int raschet(int summa, float proc) {
    float dohod, ProcToFloat;

    ProcToFloat = 0.01;

    dohod = summa + summa * (0.01*proc);
    printf("%.2f", proc*ProcToFloat);
    return dohod;
}

int main() {

    int summa;
    float proc, result;

    printf("Введите сумму вклада: "); scanf("%d", &summa);
    printf("Введите процентную ставку (с точностью .00): "); scanf("%.2f", &proc);

    result = raschet(summa, proc);

    printf("К концу года сумма будет составлять: %.2f\n Выручка: %.2f", result, result-summa);

}