// reverse a word using loop....
#include<stdio.h>
#include<string.h>

void main()
{
    char S[100];
    int i, T, len;

    printf("Enter a word: ");
    scanf("%d", &T);

    while(T--)
    {
        scanf(" %[^\n]", S);
        len = strlen(S);

        for(i = len-1; i >= 0; i--)
        {
            printf("%c", S[i]);
        }
    }

    return 0;
}
