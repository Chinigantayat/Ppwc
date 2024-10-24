// C program to print Integer data types.
#include <stdio.h>

int main()
{
    int a = 9;
    int b = -9;
    int c = 89U;
    long int d = 99998L;

    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned int data: %u\n",
           c);
    printf("Integer value with an long int data: %ld", d);

    return 0;
}
