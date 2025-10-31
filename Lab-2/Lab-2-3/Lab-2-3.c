#include <stdio.h>
#include <locale.h>

void main()
{

    setlocale(LC_CTYPE, "RU");

    float n, L;

    n = 2;
    L = 335;
    
    printf("\nДано:\n\t\t%.1f\n\t\t%.1f\n          ___________\nОтвет:\n\t\t%-+3.3f\n\n", n, L, n/L);


}