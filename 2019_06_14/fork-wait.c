
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>                                                         
#include <sys/wait.h>

int main(int argc, char** argv) {
  pid_t pid;

  pid = fork();
  if(pid==0){
    sleep(3);
    printf("Soy el hijo y mi identificador es (pid:%d)\n",(int) getpid());     $
  } else {
    int status;
    pid_t pid2;
    printf("Soy el padre y mi identificador es (pid:%d)\n",(int) getpid());
    pid2 = wait(NULL);
    printf("termino mi hijo %d\n",pid2);    $
  }
}   

