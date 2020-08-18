
//print a sum value of given number usign do-while loop

#include<stdio.h>

int main()
{
    int S, n, i;
    S = 0;
    i = 1;
    printf("Enter the Value of n: ");
    scanf("%d", &n);

    while(i > n)
        {
            printf("\n\Sum of all %d is: %d", n, S);
            return;
        }

    do{
        S = S + i;
        //i = i + 1;
        i++;
    }
    while(i <= n);
    printf("\n\Sum of all %d is: %d", n, S);

    return 0;
}
