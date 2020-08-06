#include<stdio.h>

int main()
{
    int *p = NULL;
    *p = 100;

    printf("Value of *p: %d\n", *p);

    return 0;
}
//this is error program
//p কাউকে পয়েন্ট করছে না, এটি নাল পয়েন্টার;
