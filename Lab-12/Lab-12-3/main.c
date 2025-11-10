#include <stdio.h>

int main() {
    double *pDouble, d = 5.5;
    char *pChar, c = 'A';
    long double *pLongDouble, ld = 10.5;
    short unsigned int *pShort, s = 2;
    _Bool *pBool, b = 1;

    // double
    pDouble = &d;
    printf("double: По адресу %p хранится *pDouble=%g\n", pDouble, *pDouble);
    pDouble++;
    printf("double: Смещение указателя на %ld байт. Новый адрес: %p\n", sizeof(double), pDouble);
    pDouble--;

    // char
    pChar = &c;
    printf("char: По адресу %p хранится *pChar=%c\n", pChar, *pChar);
    pChar++;
    printf("char: Смещение указателя на %ld байт. Новый адрес: %p\n", sizeof(char), pChar);
    pChar--;

    // long double
    pLongDouble = &ld;
    printf("long double: По адресу %p хранится *pLongDouble=%Lg\n", pLongDouble, *pLongDouble);
    pLongDouble++;
    printf("long double: Смещение указателя на %ld байт. Новый адрес: %p\n", sizeof(long double), pLongDouble);
    pLongDouble--;

    // short unsigned int
    pShort = &s;
    printf("short unsigned int: По адресу %p хранится *pShort=%hu\n", pShort, *pShort);
    pShort++;
    printf("short unsigned int: Смещение указателя на %ld байт. Новый адрес: %p\n", sizeof(short unsigned int), pShort);
    pShort--;

    // _Bool
    pBool = &b;
    printf("_Bool: По адресу %p хранится *pBool=%d\n", pBool, *pBool);
    pBool++;
    printf("_Bool: Смещение указателя на %ld байт. Новый адрес: %p\n", sizeof(_Bool), pBool);
    pBool--;

    return 0;
}
