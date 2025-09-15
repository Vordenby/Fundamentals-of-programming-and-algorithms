#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

int main() {
    int grad;
    float gr;
    
    printf("Введите угол в градусах: ");
    scanf("%d", &grad);
    gr = (grad * M_PI)/180;

    double result = sin(gr);

    printf("%e", result);
}

/* *  Executing task in folder C: gcc -Wall -Wextra -g3 /home/vorden/Documents/GitHub/Fundamentals-of-programming-and-algorithms/Lab-5-1/Lab-5-1.c -o /home/vorden/Documents/GitHub/Fundamentals-of-programming-and-algorithms/Lab-5-1/output/Lab-5-1 

/usr/lib/gcc/x86_64-unknown-linux-gnu/14.3.0/../../../../x86_64-unknown-linux-gnu/bin/ld: /tmp/ccaKLJie.o: in function `main':
/home/vorden/Documents/GitHub/Fundamentals-of-programming-and-algorithms/Lab-5-1/Lab-5-1.c:15:(.text+0x86): undefined reference to `sin'
collect2: error: ld returned 1 exit status

 *  The terminal process "gcc '-Wall', '-Wextra', '-g3', '/home/vorden/Documents/GitHub/Fundamentals-of-programming-and-algorithms/Lab-5-1/Lab-5-1.c', '-o', '/home/vorden/Documents/GitHub/Fundamentals-of-programming-and-algorithms/Lab-5-1/output/Lab-5-1'" failed to launch (exit code: 1). 
 *  Terminal will be reused by tasks, press any key to close it. */