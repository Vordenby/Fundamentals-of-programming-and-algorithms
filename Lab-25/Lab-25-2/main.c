#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int rand10(int mmax) {
    return 1 + rand() % (mmax - 1);
}

double rand_double(double dm) {
    double dmin = -dm;
    return dmin + (double)rand() / RAND_MAX * (dm - dmin);  
}

int* rand10_array(int n, int mmax) {
    int* array = malloc(n * sizeof(int));
    if (array == NULL) return NULL;
    
    for (int i = 0; i < n; i++) {
        array[i] = rand10(mmax);
    }
    return array;
}

double* rand_double_array(int n, double dm) {
    double* array = malloc(n * sizeof(double));  
    if (array == NULL) return NULL;
    
    for (int i = 0; i < n; i++) {
        array[i] = rand_double(dm);
    }
    return array;
}


int main(void) {
    srand(time(NULL));
    
    setlocale(LC_ALL, ".UTF-8");

    int n, mx;
    printf("Введите N и Max чз пробел.\n> ");
    scanf("%d %d", &n, &mx);
    
    double dm = (double)mx;
    
    int* array_i = rand10_array(n, mx);
    
    double* array_d = rand_double_array(n, dm);
    
    printf("\nЦелые числа [1, %d):\n", mx);
    for (int i = 0; i < n; i++) {
        printf("%d\n", array_i[i]);
    }
    
    printf("\nDouble числа [-%.0lf, %.0lf]:\n", dm, dm);
    for (int i = 0; i < n; i++) {
        printf("%.2lf\n", array_d[i]);
    }
    
    free(array_i);
    free(array_d);
    return 0;
}