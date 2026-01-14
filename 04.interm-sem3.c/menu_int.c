#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0)); //inicializa número aleatório
        numeroSecreto = rand() % 10;
        printf("Digite um número de 0 a 9: ");
        scanf("%d", &palpite);
        if(numeroSecreto == palpite)
        {
        printf("Você acertou!\n");
        printf("Número secreto: %d\n", numeroSecreto);
        } else {
        printf("Você errou!\n");
        printf("Número secreto: %d\n", numeroSecreto);
        }
        break;
    case 2:
        printf("A explicação das regras/n");
        break;
    case 3:
        printf("Encerrando o jogo!/n");
        break;
    default:
        printf("Opção inválida");
        break;
    }
}