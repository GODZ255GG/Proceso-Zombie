#include <stdio.h>
#include <stdlib.h> // for exit()
#include <unistd.h> // for fork(), and sleep

int  main()
{
    //Creando el proceso Hijo
    int pid = fork();
    printf("Id del proceso: %d\n", pid);

    if(pid > 0) // True para el proceso Padre
        sleep(20);
    else if(pid == 0) //True para el proceso Hijo
    {
        printf("\nProceso Zombie creado con exito!");
        printf("\nEstará activo durante 20 segundos\n");
        exit(0);
    }
    else //True cuando el proceso Hijo no se pude crear
    {
        printf("\nLo Sentimos! El proceso Hijo no pudo ser creado...");
    }
    return 0;
}