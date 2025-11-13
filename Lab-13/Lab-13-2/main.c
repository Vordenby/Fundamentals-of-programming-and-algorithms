#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void) {

    char Name[20];
    char Snew[40] = "Hello, ";

    printf("What's your name?\n> ");
    
    scanf("%19s", Name);

    for (int i = 0; i < sizeof(Name); i++) {

        if (Name[i] == 'a') {

            Name[i] = '@';

        }

    }

    if (strlen(Snew) + strlen(Name) < sizeof(Snew)) {
        strcat(Snew, Name);
    } else {
        printf("Your name is too big\n");
        return 1;
    }

    printf("%s!", Snew);

    return 0;

}