#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

double* full_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {

        *(ptr_array+i) = i* 200.0 / 45.0;

    }

    return ptr_array;
}

double* calc_elements(double* ptr_array, int n) {

    for (int i = 0; i < n; i++) {

        *(ptr_array + i) = (double)((int)*(ptr_array+i));

    }

    return ptr_array;

}

void put_elements(double* ptr_array, int n) {

    for (int i = 0; i < n; i++) {

        printf("array[%d] = %.2f\n", i+1, *(ptr_array + i));

    }
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
    puts("\n\n\n");
    calc_elements(ptr_array, size);
    put_elements(ptr_array, size);

    free(ptr_array);

    return 0;

}