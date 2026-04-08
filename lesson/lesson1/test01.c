#include<stdio.h>
#include<unistd.h>
int main()
{
    int count=10;
    for(;count>=0;count--)
    {
        printf("%-2d\r",count);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}

