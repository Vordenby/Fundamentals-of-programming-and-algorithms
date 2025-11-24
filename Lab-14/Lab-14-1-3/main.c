#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 1000

void full_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {

        *(ptr_array+i) = i* 200.0 / 45.0;

    }
}

void put_elements(double* ptr_array, int n) {

    for (int i = 0; i < n; i++) {

        printf("array[%d] = %.2f\n", i, *(ptr_array + i));

    }

}


//Отбросить дробную часть у всех элементов массива
void calc_elements(double* ptr_array, int n) {

    for (int i = 0; i < n; i++) {

        *(ptr_array + i) = (double)((int)*(ptr_array+i));

    }

}

double sum_elements(double* ptr_array, int begin, int end) {

    double sum = 0;

    for (int i = begin; i < end+1; i++) {

        sum+=*(ptr_array+i);

    }
    return sum;
}

int find_element(double* ptr_array, int n, double element) {

    for (int i = 0; i < n; i ++) {

        if (*(ptr_array+i) == element) {

            return i;

        }

        else {return -1;}

    }

}

int find_max_from_index(double *ptr_array, int n, int ka) {
    if (ka >= n) return -1;
    
    int max_index = ka;
    double max_value = *(ptr_array + ka);
    
    for (int i = ka + 1; i < n; i++) {
        if (*(ptr_array + i) > max_value) {
            max_value = *(ptr_array + i);
            max_index = i;
        }
    }
    return max_index;
}

int main(void) {

    setlocale(LC_ALL, ".UTF-8");

    int size, beg, end;
    double array[N];

    
    printf("Введите размер массива \n> ");scanf("%d", &size);
    printf("Введите индексы начала и конца для вычисления суммы (чз пробел)\n> ");scanf("%d %d", &beg, &end);

    double sum = sum_elements(array, beg, end);

    full_elements(array, size);
    put_elements(array, size);

    double search_element = array[0];
    int max_index = find_max_from_index(array, size, 0);


    printf("%lf", sum);

    int index = find_element(array, size, search_element);
    if (index != -1) {
        printf("Элемент %.2f найден (индекс = %d)\n", search_element, index);
    } else {
        printf("Элемент %.2f не найден!\n", search_element);
    }

    if (max_index != -1) {
        printf("Максимальный элемент начиная с индекса 0 находится по индексу %d со значением %.2f\n", 
               max_index, *(array + max_index));
    }

    calc_elements(array, size);
    printf("\nПосле обработки:\n");
    put_elements(array, size);

    return 0;

}

