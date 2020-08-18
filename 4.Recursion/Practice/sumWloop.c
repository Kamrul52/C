//print a sum value of given number usign loop]

#include<stdio.h>

int main()
{
    int S, n, i;
    S = 0;
    i = 1;
    scanf("%d", &n);

    for(; i <= n; i++)
    {
        S = S + i;
    }

    printf("\n\Sum of all %d is: %d", n, S);

    return 0;
}
