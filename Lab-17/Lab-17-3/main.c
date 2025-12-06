#include <time.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


void BubbleSort(int* ptr_arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            int temp = ptr_arr[j];
            if (ptr_arr[j] > ptr_arr[j+1]) {
                ptr_arr[j] = ptr_arr[j+1];
                ptr_arr[j+1] = temp;
            }
        }
    }
}

void PrintArray(int* ptr_arr, int n) {
    for (int i = 0; i < n; i++) printf("%d\n", ptr_arr[i]);
}

void GenArray(int* ptr_array, int n) {
    for (int i = 0; i < n; i++) *(ptr_array+i) = 1 + rand() % (1000 - 1);
}

void sort_coktail(int* ptrarr, int n) {
    int start = 0;
    int end = n - 1;
    int swapped;
    do {
        swapped = 0;
        for (int i = start; i < end; i++) {
            if (ptrarr[i] > ptrarr[i + 1]) {
                int temp = ptrarr[i];
                ptrarr[i] = ptrarr[i + 1];
                ptrarr[i + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
        swapped = 0;
        for (int i = end; i > start; i--) {
            if (ptrarr[i] < ptrarr[i - 1]) {
                int temp = ptrarr[i];
                ptrarr[i] = ptrarr[i - 1];
                ptrarr[i - 1] = temp;
                swapped = 1;
            }
        }
        end--;
    } while (swapped);
}

void sort_select(int* ptrarr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (ptrarr[j] < ptrarr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = ptrarr[i];
        ptrarr[i] = ptrarr[min_idx];
        ptrarr[min_idx] = temp;
    }
}

void sort_insert(int* ptrarr, int n) {
    for (int i = 1; i < n; i++) {
        int key = ptrarr[i];
        int j = i - 1;
        while (j >= 0 && ptrarr[j] > key) {
            ptrarr[j + 1] = ptrarr[j];
            j--;
        }
        ptrarr[j + 1] = key;
    }
}



int main() {
    setlocale(LC_ALL, ".UTF-8");

    int sample_sizes[] = {100, 1000, 10000};
    int num_sizes = sizeof(sample_sizes) / sizeof(int);

    for (int i = 0; i < num_sizes; i++) {
        int n = sample_sizes[i];
        int *array = (int *)malloc(n * sizeof(int));
        if (array == NULL) {
            printf("Ошибка! Невозможно выделить память для n = %d\n", n);
            continue;
        }

        GenArray(array, n);

        clock_t start = clock();
        sort_insert(array, n);
        clock_t end = clock();
        double time_insert = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Сортировка вставками (n=%d): %.10f секунд\n", n, time_insert);

        int *array_sel = (int *)malloc(n * sizeof(int));
        if (array_sel == NULL) {
            printf("Ошибка! Невозможно выделить память!\n");
            continue;
        }
        GenArray(array_sel, n);
        start = clock();
        sort_select(array_sel, n);
        end = clock();
        time_insert = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Сортировка простым выбором (n=%d): %.10f секунд\n", n, time_insert);

        int *array_bubble = (int *)malloc(n * sizeof(int));
        if (array_bubble == NULL) {
            printf("Ошибка! Невозможно выделить память!\n");
            continue;
        }
        GenArray(array_bubble, n);
        start = clock();
        BubbleSort(array_bubble, n);
        end = clock();
        time_insert = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Сортировка пузырьком (n=%d): %.10f секунд\n", n, time_insert);

        int *array_kokteil = (int *)malloc(n * sizeof(int));
        if (array_kokteil == NULL) {
            printf("Ошибка! Невозможно выделить память!\n");
            continue;
        }
        GenArray(array_kokteil, n);
        start = clock();
        sort_coktail(array_kokteil, n);
        end = clock();
        time_insert = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Коктейльная сортировка (n=%d): %.10f секунд\n", n, time_insert); 

        free(array);
        free(array_sel);
        free(array_bubble);
        free(array_kokteil);
    }

    return 0;
}
