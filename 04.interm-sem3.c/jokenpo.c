#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("JOGO DE JOKENPÔ\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    if (escolhaJogador == escolhaComputador);
    {
        printf("Parabéns, você venceu ao escolher %d\n", escolhaJogador);
        printf("A escolha do seu adversário foi: %d\n", escolhaComputador);
    } else {
        printf("Não foi dessa vez! Você perdeu ao escolher %d\n", escolhaJogador);
        printf("A escolha do seu adversário foi: %d\n", escolhaComputador);
    }
      
    
    switch (escolhaJogador == escolhaComputador)
    {
    case constant expression:
        /* code */
        break;
    
    default:
        break;
    }

}