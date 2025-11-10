#include <stdio.h>

void printBytes(void *ptr, size_t size) {
    unsigned char *bytePtr = (unsigned char *)ptr;
    for (size_t i = 0; i < size; i++) {
        printf("%.2x ", bytePtr[i]);
    }
    printf("\n");
}

int main(void) {
    int x = 0x12345678;
    int *prt = &x;
    unsigned char *a = (unsigned char *)prt;
    unsigned char *a1 = a + 3;
    unsigned char *a2 = a + 2;
    unsigned char *a3 = a + 1;
    unsigned char *a4 = a;

    printf("Байты int x: ");
    printBytes(&x, sizeof(x));

    printf("Порядок байтов: %.2x %.2x %.2x %.2x\n", *a1, *a2, *a3, *a4);

    float floatValue = 12345.0f;
    double doubleValue = 12345.0;

    printf("Байты Float 12345.0: ");
    printBytes(&floatValue, sizeof(floatValue));

    printf("Байты double 12345.0: ");
    printBytes(&doubleValue, sizeof(doubleValue));

    return 0;
}
