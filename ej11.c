#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void main()
{
       printf("\n Alejandro Berrendero Gomez \n");      
       system("ls -l -S /home/alumno/Descargas");
       
       printf("\n Mostramos el terminal \n"); 
       system("tty");
       
       printf("\n Lo dormimos 60s \n"); 
       sleep(3);
       
       printf("\n Muestra informacion de proceso \n"); 
       system("ps -efl | grep ej11");
}

