#include "solucion.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>




int main(int argc, char** argv) {
  int x = 20;
  pid_t pid;
  pid = fork();

  if (pid<0){
	printf("fork failed");
	}

 else if(pid==0){
    printf("Soy el hijo\n");
    printf("fibonacci(%d) = ",x);
    x = fibonacci(x);
    printf("%d\n",x);
    guardarEntero("archivo",x);
  } 
	else {
    	int status;
	    wait(&status);
	    int ans = leerEntero("archivo")* 100;
	    printf("soy el padre \n espero a que termine mi hijo \n leo el valor que calculo mi hijo del archivo 'x' \n");
	    printf("multiplico el resultado por 100 e imprimo por pantalla %d",ans);
	  }

  return 0;
}
