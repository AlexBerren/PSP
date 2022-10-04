//Alejandro Berrendero Gomez
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


void main() {
    pid_t pid, pidhijo;
    
    pid = fork();
    
    // Proceso hijo
    if (pid == 0) {
	    printf("Alejandro Berrendero Gomez\n");
	    printf("Soy un proceso hijo\n");
	    

      
    // proceso padre
    } 
    else
    {
    	pidhijo = wait(NULL);
        printf("Soy el proceso padre con pid = %d\n", getpid());
        printf("Soy el proceso hijo con pid = %d\n", pidhijo);
        
    } 
    exit(0);
}
