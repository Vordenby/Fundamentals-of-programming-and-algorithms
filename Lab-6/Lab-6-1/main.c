#include <stdio.h>

void Leap_year(int year) {

    if (year % 4 != 0) { printf("Год %d не високосный\n", year);}
    else { printf("Год %d високосный\n", year); }

}

int main() {

    int years;
    printf("Введите год: ");
    scanf("%d", &years);

    Leap_year(years);

    return 0;

}