#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <errno.h>
#include <linux/kernel.h>
#include <linux/sched.h>
 
int main()
{
    int pid;
    int nice_increment;
     
    printf("Enter pid number of process: ");
    scanf("%d", &pid);
     
    printf("Enter the number of nice_increment: ");
    scan("%d", &nice_increment);
     
    int result = syscall(355,pid,nice_increment);
     
    return result;
}

