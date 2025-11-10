#include <stdio.h>

int main() {

    float array[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.0};
    float *ptr_a;

    // 4.1
    printf("array=%p\n", (void*)array);
    printf("&array[0]=%p\n", (void*)&array[0]);
    printf("&array=%p\n", (void*)&array);

    // 4.2
    ptr_a = array;
    printf("ptr_a=%p, *ptr_a=%.1f\n", (void*)ptr_a, *ptr_a);
    
    ptr_a++;
    printf("ptr_a=%p, *ptr_a=%.1f\n", (void*)ptr_a, *ptr_a);
    
    ptr_a += 4;
    printf("ptr_a=%p, *ptr_a=%.1f\n", (void*)ptr_a, *ptr_a);
    
    ptr_a -= 2;
    printf("ptr_a=%p, *ptr_a=%.1f\n", (void*)ptr_a, *ptr_a);

    printf("Цикл с увеличением указателя на 2:\n");
    for (int i = 0; i < 10; i += 2) {
        printf("array[%d]=%.1f\n", i, *(ptr_a + i));
    }

    // 4.4
    ptr_a = array + 9;
    printf("Обратный проход:\n");
    for (int i = 9; i >= 0; i--) {
        printf("array[%d]=%.1f\n", i, *(ptr_a--));
    }

    return 0;
}
