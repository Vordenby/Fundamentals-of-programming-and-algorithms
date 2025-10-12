#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_CTYPE, "RUS");
	puts("Моя программа");
	printf("Hello, World! \n");

	getchar();

	return 0;
}