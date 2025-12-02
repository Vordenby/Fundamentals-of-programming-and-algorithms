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

        *(ptr_array + i) = (double)((int)*(ptr_array+i));

    }

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