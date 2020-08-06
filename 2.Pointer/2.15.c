#include<stdio.h>

int main()
{
    char c ='A';
    char *p;

    p = &c;

    printf("Address of c: %p\n", c);
    printf("Address of p: %p\n", p);
    return 0;
}

//Output: Address of c: 0000041, Address of p: 0060FEFB
//N.B. Address must be changeable
