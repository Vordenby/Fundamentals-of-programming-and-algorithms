#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void full_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        *(ptr_array+i) = -1 + (double)rand() / RAND_MAX * (1 + 1);
    }
}

void calc_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        ptr_array[i] = (double)((int)ptr_array[i]);
    }
}


void put_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %.2f\n", i+1, *(ptr_array + i));
    }
}

double* insert(double* ptr_arr, int *size, int index, double num) {
    int size_n = (*size) + 1;
    if (ptr_arr == NULL) return NULL;

    double* ptr_arr_n = (double*)realloc(ptr_arr, size_n * sizeof(double));
    if (ptr_arr_n == NULL) return NULL;

    ptr_arr = ptr_arr_n;

    for (int i = size_n - 1; i > index; i--) {
        ptr_arr[i] = ptr_arr[i-1];
    }
    ptr_arr[index] = num;
    *size = size_n;
    return ptr_arr;
}

int main() {
    double * ptr_array;
    int size;

    scanf("%d", &size);

    ptr_array = (double *)malloc(size * sizeof(double));
    if (ptr_array == NULL) {
        puts("ERROR");
        return -1;
    }

    full_elements(ptr_array, size);
    put_elements(ptr_array, size);
    
    puts("\n\nВставка -999 перед первым отрицательным элементом:\n");
    
    int first_negative_index = -1;
    for (int i = 0; i < size; i++) {
        if (ptr_array[i] < 0) {
            first_negative_index = i;
            break;
        }
    }
    
    if (first_negative_index != -1) {
        ptr_array = insert(ptr_array, &size, first_negative_index, -999.0);
    }
    
    put_elements(ptr_array, size);

    puts("\n\n\n");

    calc_elements(ptr_array, size);
    put_elements(ptr_array, size);
    free(ptr_array);
    return 0;
}
