#include <stdio.h>

int main() {
/*
    unsigned | only 0 and +(ve) infinite
    singned  | -infinte 0 + infinite
    signed = int
*/

    int a = -45;
    signed int b = -12;
    unsigned int c = 15;
    printf("a = %d \n", a);
    printf("b = %d \n", b);
    printf("c = %u \n", c);
    return 0;
}