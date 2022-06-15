#include<stdio.h>
#include<unistd.h>

int main() {
  printf("Mensagem sendo executada pelo programa exec_demo\n");
  printf("PID do exec_demo é %d\n",getpid());
  char *args[] = {"./hello", NULL};
  execv(args[0], args);  
  printf("Esse texto nunca será mostrado na tela");
  return 0;
}
