#include <stdio.h>

int main() {
    char c;
    printf("Введите символы 'a' or 'b': ");
    scanf("%c", &c);
    
    switch (c)
    {
    case 'a':
        printf("Выведено 'a'.\n");
        break;
    
    case 'b':
        printf("Выведено 'b'.\n");
        break;
    
    default:
        printf("Неизвестный символ.\n");

    }
    return 0;
}