#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    pid_t id=fork();
    if(id>0)
    {
        printf("我是一个父进程...\n");
    }else if(id==0){
        printf("我是一个子进程。。。\n");
    }
    return 0;
}
