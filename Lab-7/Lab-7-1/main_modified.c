#include <stdio.h>

int main() {
    char c;
    
    printf("Введите ваш символ: ");scanf("%c", &c);

    switch (c)
    {
    case '0':
        printf("Это цифра.\n");
        break;
    case '1':
        printf("Это цифра.\n");
        break;
    case '2':
        printf("Это цифра.\n");
        break;
    case '3':
        printf("Это цифра.\n");
        break;
    case '4':
        printf("Это цифра.\n");
        break;
    case '5':
        printf("Это цифра.\n");
        break;
    case '6':
        printf("Это цифра.\n");
        break;
    case '7':
        printf("Это цифра.\n");
        break;
    case '8':
        printf("Это цифра.\n");
        break;
    case '9':
        printf("Это цифра.\n");
        break;
    default:
        printf("Это символ.\n");
        break;
    }

    return 0;
}