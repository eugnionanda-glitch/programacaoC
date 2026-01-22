#include <stdio.h>

int main () {

    int numero;

    do {
        printf("Digite um número par para sair do programa: \n");
        scanf("%d", &numero);

        if (numero %2 ==0){
            
        printf("Esse número é par!\n", numero);

        } else {
        printf("Esse número é ímpar!\n", numero);
        }
    } while (numero %2 !=0);
    
    printf("Você digitou um número par, saindo do programa\n");
    return 0;
}