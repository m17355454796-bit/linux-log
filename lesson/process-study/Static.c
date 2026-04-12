#include <stdio.h>

void test()
{
    int a = 0;
    static int b = 0;
    a++;
    b++;
    printf("a=%d b=%d\n", a, b);
}

int main()
{
    for(int i = 0; i < 5; i++)
        test();
    return 0;
}

