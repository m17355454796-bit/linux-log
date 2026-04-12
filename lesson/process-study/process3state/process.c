#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
void RS()//演示RS状态
{
    pid_t id=fork();
    if(id>0)
    {
        printf("这是一个父进程。。。pid:%d,ppid:%d\n",getpid(),getppid());
        sleep(30);
    }else if(id==0)
    {
        printf("这是一个子进程。。。pid:%d,ppid:%d\n",getpid(),getppid());
        while(1)
        {

        }
    }
}
void Z()//观察僵尸状态
{
    pid_t id=fork();
    if(id>0)
    {
        printf("我是父进程。。。pid:%d,ppid:%d",getpid(),getppid());
        while(1)
        {}
    }else if(id==0)
    {
        printf("这是一个子进程。。。pid:%d,ppid:%d\n",getpid(),getppid());
    exit(1);
    }
}
int main()
{
   // RS();
     Z();
}
