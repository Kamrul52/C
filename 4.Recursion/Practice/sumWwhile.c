
//print a sum value of given number using while]

#include<stdio.h>

int main()
{
    int S, n, i;
    S = 0;
    i = 1;
    printf("Enter the Value of n: ");
    scanf("%d", &n);

    while(i<=n)
    {
        S = S + i;
        //S += i;
        i++;
        //i = i+1;
    }
    printf("\n\Sum of all %d is: %d", n, S);

    return 0;
}
