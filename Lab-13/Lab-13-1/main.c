#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {

    char Name[20];
    char Snew[40] = "Hello, ";

    printf("What's your name?\n> ");
    
    scanf("%19s", Name);


    if (strlen(Snew) + strlen(Name) < sizeof(Snew)) {
        strcat(Snew, Name);
    } else {
        printf("Your name is too big\n");
        return 1;
    }
    
    printf("%s!\n", Snew);

    // 1.2

    for (char * ptr = Snew; *ptr; ptr++) {

        *ptr = toupper(*ptr);

    }

    printf("%s!\n", Snew);

    return 0;
}