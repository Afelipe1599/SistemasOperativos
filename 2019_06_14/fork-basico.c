#include <unistd.h>                                                            
#include <stdio.h>                                                             
                                                                               
int main(int argc, char** argv) {                                              
  pid_t pid;                                                                   
                                                                               
  pid = fork();                                                                
  if(pid==0){                                                                  
    printf("Soy el hijo y mi identificador es (pid:%d)\n",(int) getpid());                                                         
  } else {                                                                     
    printf("Soy el padre y mi identificador es (pid:%d)\n",(int) getpid());                                                          
  }                                                                            
}   
