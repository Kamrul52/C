
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp = fopen("input.txt", "r");
    if( fp == NULL){
        perror("Can't open file");
        return EXIT_FAILURE;
    }

    int ch;

    ch = fgetc(fp);
    printf("%c\n", (char)ch);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fseek(fp, 4, 0);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fclose(fp);

    return 0;
}

// A
// B
// E
