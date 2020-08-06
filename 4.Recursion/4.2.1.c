//Local and Global variable

#include<stdio.h>

void myfunc(int y, int x)
{
    y = y * 2;
    x = x + 10;
    printf("myfunc, x = %d, y = %d\n", x , y);
}
int main(){
    int y = 5;
    int x = 10;

    myfunc(x,y);

    printf("main, x = %d, y = %d\n", x, y);

    return 0;
}

//output: myfunc, x =20, y = 10;
// main, x = 10, y = 5

