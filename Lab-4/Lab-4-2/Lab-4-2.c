#include <stdio.h>

int main() {
    int a = 11;
    int b = 3;

    int x; float y; double z;

    x = a/b; y = a/b; z = a/b;

    printf("%d, %f, %e\n----------\n", x,y,z);

    printf("%d, %f, %e", a/b, (float)a/b, (double)a/b);
    
    return 0;
}