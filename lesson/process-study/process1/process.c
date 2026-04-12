#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
    printf("创建的进程编号为%d\n",getpid());
    pid_t id=fork();
    if(id>0)
    {
        printf("我是父进程，我的pid为%d\n",getpid());
    }else if(id==0)
    {
        printf("我是子进程，我的pid为%d\n",getpid());
    }
    return 0;
}

