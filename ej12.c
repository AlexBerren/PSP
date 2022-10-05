#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
       printf("\n Alejandro Berrendero Gomez \n");
       printf("DNI: 1234");
            
       system("\n ls -l -S /home/alumno/Descargas \n");
       
       printf("\n Mostramos el terminal \n"); 
       system("tty");
       
       printf("\n Lo dormimos 60s \n"); 
       sleep(120);
       
       printf("\n Muestra informacion de proceso \n"); 
       system("ps -efl | grep ej11");
}

