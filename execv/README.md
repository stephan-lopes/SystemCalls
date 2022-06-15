# Chamadas do Sistema execv()
---
_Esse é um exemplo de como o exec funciona._

## Como executar?
Para executar, primeiro será necessário ter o GCC instalado em sua máquina, para compilar, transformando os arquivos C em binários executáveis.

Após isso, executando o comando `make`, ele irá compilar os arquivos em C. Com isso, você terá dois arquivos: `exec_demo` e `hello`. Após isso, execute o programa `./exec_demo` para visualizar a demonstração de chamada de sistema.

## O que seria o Execv?
O **execv**, permite executar um programa com o mesmo PID que você está usando. Ele é semelhante ao comando built-in do linux `exec`, onde qualquer programa passado para ele como argumento, ele executa no mesmo processo, não abrindo uma _subshell_.

Caso queira entender melhor sobre o código, fique a vontade de olhar os arquivos em C, e visualizar o que eles estão fazendo. 

## Por que o último printf não é executado?
Como descrito acima, o **execv** executa no mesmo processo em que ele está. Todo o processo, espera um retorno (no fim dos códigos, existe esse trecho de código: `return 0;`). Como o programa executado com o `execv` está no mesmo processo que quem o chamou, não criando um processo filho, o `return` dele é enviado para o sistema, que então encerra a execução. Você pode fazer o teste, modificando o `return 0;` do código `hello.c` por `return 1;`, compilar novamente com `make` e por fim executar o seguinte comando `./exec_demo; echo $?`. O comando `$?` no linux, mostra o código de retorno do último processo. Ele irá retornar **1**, pois você está encerrando o processo pelo programa `hello` e não pelo `exec_demo`.
