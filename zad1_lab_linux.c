#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


void children(int args){
	printf("\nPID of parent: %d\nPID of children %d\n\n",args,getpid());
}

int main(void){
	int pid=fork();
	if(pid==0){
		printf("\n\nparent PID in main: %d,\nchildren process in main: %d\n\n",getpid(),getppid());
	}
	else{
		children(pid);
	}

	return 0;
}
