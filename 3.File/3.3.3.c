#include<stdio.h>

int main()
{
    FILE *fb;
    char filename[] = "my_file3.3.1.txt";

    fb = fopen(filename, "w");

    fprintf(fb, "This is a file created by my program! ");
    fprintf(fb, "I am so happy.");
    fclose(fb);

    fb = fopen(filename, "r+");
    fprintf(fb, "Second line\n");

    return 0;
}
//Output: Second line
//        e created by my program! I am so happy.



