#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>


int main(){
    int i=0 , pid = getpid(), x=4;
    
    for ( i = 0; i<10 ; i++) {
        if(pid != 0){
            pid = fork();
        } else {
            break;
        } 
            
    }
    
    printf ("Opa %d \n", i);
    
    return 0;
}




// int main0() {
//     int pid, x=4;
    
//     pid = fork();
    
//     if (pid == 0 ) {
//         fork(); 
//         x += 2;
//     } else {
//         x--;
//     } 
    
//     printf("x = %d\n", i);
//     return 0;
// }
