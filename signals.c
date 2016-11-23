#include <sys/types.h>  
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
int main() {
	pid_t pid = fork();
	if (pid == 0) {
	  for (;;) {
		sleep(2); 
		printf("pid=%ld\n",getpid());
	  }
	}
	else {
	  sleep(5);
	  kill(pid,SIGKILL); exit(0); 
	 }
}