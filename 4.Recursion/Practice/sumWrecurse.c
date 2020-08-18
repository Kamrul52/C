//print a sum value of given number using RECURSE
#include<stdio.h>

int addNumbers(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    return n + addNumbers(n - 1);
}

int main()
{
    int n;
    printf("\n Recursion : calculate the sum of numbers from 1 to n :\n");
	printf("---------------------------------------------------------\n");

    printf("Enter the Value of n: ");
    scanf("%d", &n);

    printf("\n\Sum of 1 to %d is: %d", n, addNumbers(n));

    return 0;
}
