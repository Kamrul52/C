#include<stdio.h>

int f_calls =0;
int fib(int n)
{
    f_calls = f_calls + 1;

    if( n == 1 || n == 2)
    {
        return 1;
    }
    return fib(n-1) + fib(n - 2);
}

int main()
{
    int n; // 5
    char s[3];
    scanf("%d", &n);

    if( n == 1)
    {
        strcpy(s, "st");

    }
    else if( n == 2)
    {
        strcpy(s, "rd");

    }
    else if( n == 3 || n > 3)
    {
        strcpy(s, "th");

    }
    printf("%d%s fibonacci number %d is %d\n", n, s, fib(n));

    printf("Number of functions calls: %d\n", f_calls);
    return 0;
}