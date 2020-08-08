// recursion
#include<stdio.h>

void recurse(int count)
{
    if( count > 5)
    {
        return;
    }
    printf("Count = %d\n", count);
    recurse(count + 1);
    //return; কোন ফাংনের রিটার্ন টাইপ যদি void হয় , তাহলে ফাংশনের শেষ লাইনে return; না লিখলেও চলে, আপনা আপনি সেটি রিটার্ন করে।
}

int main()
{
    recurse(1);
    return 0;
}

//Count = 1
//Count = 2
//Count = 3
//Count = 4
//Count = 5
