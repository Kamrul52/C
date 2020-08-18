// reverse a word using recurse....
# include <stdio.h>
#include<string.h>

void reverse(char *str)
{
    if (*str)
    {
        reverse(str+1);
        printf("%c", *str);
    }
}

int main()
{
    char S[] = "I LOVE YOU";
    reverse(S);
    return 0;
}
