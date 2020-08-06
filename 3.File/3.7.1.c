// দুইটি কারেক্টার প্রিন্ট করার পর তিনটি কারেক্টার বাদ দিয়ে পরের কারেক্টার প্রিন্ট করার প্রোগ্রাম।

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

    fseek(fp, sizeof(char)*3 , SEEK_CUR);
    ch = fgetc(fp);
    printf("%c\n", (char)ch);

    fclose(fp);

    return 0;
}

// A
// B
// F

//comment: charecter er majhkhane space thakle program okhanei close hoye jabe, tai space rakha jabe na
