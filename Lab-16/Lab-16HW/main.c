#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double RandDouble() {
    return (double)rand() / RAND_MAX;
}

double* NArray(double *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = random_double();
    }

    return arr;
}

double Find_Min(double arr[], int size) {
    double min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double* create_d(double *a, int size_a, double *b, int size_b, double *c, int size_c) {
    double min_a = Find_Min(a, size_a);
    double min_b = Find_Min(b, size_b);
    double min_c = Find_Min(c, size_c);

    int size_d = size_a + size_b + size_c;
    double *d = (double*)malloc(size_d * sizeof(double));
    int index = 0;

    for (int i = 0; i < size_a; i++) {
        if (a[i] != min_a) {
            d[index++] = a[i];
        }
    }
    for (int i = 0; i < size_b; i++) {
        if (b[i] != min_b) {
            d[index++] = b[i];
        }
    }
    for (int i = 0; i < size_c; i++) {
        if (c[i] != min_c) {
            d[index++] = c[i];
        }
    }

    return d;
}

int main() {
    srand(time(NULL));

    int size_a = rand() % 41 + 10;
    int size_b = rand() % 41 + 10;
    int size_c = rand() % 41 + 10;

    double *a = (double*)malloc(size_a * sizeof(double));
    double *b = (double*)malloc(size_b * sizeof(double));
    double *c = (double*)malloc(size_c * sizeof(double));

    NArray(a, size_a);
    NArray(b, size_b);
    NArray(c, size_c);

    double *d = create_d(a, size_a, b, size_b, c, size_c);

    printf("Массив a: ");
    for (int i = 0; i < size_a; i++) {
        printf("%.4f ", a[i]);
    }
    printf("\n");

    printf("Массив b: ");
    for (int i = 0; i < size_b; i++) {
        printf("%.4f ", b[i]);
    }
    printf("\n");

    printf("Массив c: ");
    for (int i = 0; i < size_c; i++) {
        printf("%.4f ", c[i]);
    }
    printf("\n");

    printf("Массив d: ");
    for (int i = 0; i < size_d; i++) {
        printf("%.4f ", d[i]);
    }
    printf("\n");

    free(a);
    free(b);
    free(c);
    free(d);

    return 0;
}
