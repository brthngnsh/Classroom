#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
    pid_t process_id;
    pid_t p_process_id;
    fork();
    process_id = getpid();
    p_process_id = getppid();
    printf("\nParent:%d",p_process_id);
    printf("\nchild:%d",process_id);
    return 0;
}

