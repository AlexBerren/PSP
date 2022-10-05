//Alejandro Berrendero Gomez
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


void main() {
    pid_t pid, pidhijo, pidNieto;
    
    pid = fork();
    
    
    if (pid == 0) {
    	   
	    pidNieto=  fork();
	    if(pidNieto ==0){
	    //p3
	    printf("Soy el proceso P3 con pid = %d\n", getpid());
            printf("Mi padre P2 tiene el pid = %d\n", getppid());
	    }else{
	    // Proceso hijo p2
	    printf("Soy el proceso P2 con pid = %d\n", getpid());
            printf("Mi padre P1 tiene el pid = %d\n", getppid());
	    wait(NULL);
	    }
      
    
    } 
    else
    {
    	// proceso padre p1
    	pidhijo=wait(NULL);
        printf("Soy el proceso P1 con pid = %d\n", getpid());
        printf("Mi hijo es P2 con pid = %d\n", pidhijo);
        
    } 
    exit(0);
}
