#include<stdio.h>
#include<stdlib.h>

int main()
{
    int return_value;
    char *filename = "image1.png";

    return_value = remove(filename);

    if(return_value != 0){
        perror("File Remove Failed");
        return 1;
    }

    printf("%s removed successfully\n", filename);
    //now try to remove again
    return_value = remove(filename);

    if(return_value != 0 ){
        perror("file Remove Failed");
        return 1;
    }

    printf("%s removed successfully\n", filename);
    return 0;
}

// if file exits:
//output: image1.png removed successfully
//        file removed failed: No such file or directory.


// if file doesn't exits:
// output: file removed failed: No such file or directory
