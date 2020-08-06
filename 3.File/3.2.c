#include<stdio.h>

int main()
{
    FILE *fb;
    char filename[] = "my_file3.2.txt";

    fb = fopen(filename, "w");

    fprintf(fb, "This is a file created by my program! ");
    fprintf(fb, "I am so happy.");

    fclose(fb);
    fprintf(fb, " Second line.\n");

    return 0;
}
//Output: fclose(fb) will first executed, so program will be stop without printing Second line

