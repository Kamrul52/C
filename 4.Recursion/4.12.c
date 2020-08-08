
//how many time function was called..
#include<stdio.h>

int f_calls =0;
int factorial(int n)
{
    f_calls = f_calls + 1;

    if( n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int n; // 5
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Undefined\n");
        return 0;
    }
    printf("Factorial of %d is %d\n", n, factorial(n));

    printf("Number of functions calls: %d\n", f_calls);
    return 0;
}

//Factorial of 5 is 120
//Number of functions calls: 6
