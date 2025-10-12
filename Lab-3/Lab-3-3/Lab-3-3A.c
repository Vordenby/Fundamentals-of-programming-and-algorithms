#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

#define max(a,b) ((a) > (b) ? (a) : (b))

int count_digits(int number) {
	char buffer[50];

	return snprintf(buffer, sizeof(buffer), "%d", number);
}


int main(void)
{
	setlocale(LC_CTYPE, "rus");
	int a = 20;
	int b = 50000;

	int r1, r2, r3;
	r1 = a * b;
	r2 = a + b;
	r3 = a - b;

	int max_int = max(r1, r2);

	char* i = "a+b";
	char* v = "a*b";
	char* j = "a-b";

	char o[] = "";

	int razmer2 = count_digits(b);

	int width = 10;
	int width_2 = width - (razmer2 + 1);

	//printf("%zu",strlen(o));

	printf("----------------------------------\n");
	{
		printf("|%*s|", width, v);
		printf("%*s|", width, i);
		printf("%*s|\n", width, j);
	}
	printf("----------------------------------\n");

	{
		printf("|%*d*%d|", width_2, a, b);
		printf("%*d*%d|", width_2, a, b);
		printf("%*d*%d|\n", width_2, a, b);
	}

	printf("----------------------------------\n");
	
	{

		printf("|%*d|", width, a * b);
		printf("%*d|", width, a * b);
		printf("%*d|", width, a * b);

	}
	





	return 0;

}



