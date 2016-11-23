#include <sys/types.h>  
#include <unistd.h>
#include <signal.h>
#include <stdio.h>

void SIGALRM_handler(int signum) {
	printf("Executando alarm handler");
	alarm(5);
} 

main() {
	signal(SIGALRM, SIGALRM_handler);
	
	alarm(5);
	while(1);
}