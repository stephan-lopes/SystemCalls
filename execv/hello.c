#include <stdio.h>
#include <unistd.h>

int main() {
  printf("Mensagem sendo executado pelo programa hello\n");
  printf("PID do hello é: %d\n", getpid());
  return 0;
}
