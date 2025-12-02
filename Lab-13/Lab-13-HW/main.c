#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {

    char text[80]; scanf("%81s", &text);

    for (char * ptr = text; *ptr; ptr++) {

        *ptr = toupper(*ptr);

    }

    printf("\n%s\n", text);

    return 0;

}