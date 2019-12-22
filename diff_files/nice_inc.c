#include<linux/syscalls.h>
#include<linux/kernel.h>

asmlinkage int set_nice_inc(pid_t pid, int value){
	struct task_struct *t;
	t = task_find_by_vpid(pid);
	if(value < 0)
		return -EBADMSG;
	t->nice_inc = value;
	return t->nice_inc;
}

