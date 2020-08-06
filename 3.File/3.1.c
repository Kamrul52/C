#include<stdio.h>

int main()
{
    FILE *fb;
    char filename[] = "my_file.txt";

    fb = fopen(filename, "w");

    fprintf(fb, "This is a file created by my program! ");
    fprintf(fb, "I am so happy.");

    fclose(fb);

    return 0;
}
//Output: create a file named my_file.txt in where a program saved.
