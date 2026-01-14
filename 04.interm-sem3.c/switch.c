#include <stdio.h>

int main (){
    int opcao;
    float saldo = 1.000;

    printf ("Escolha uma opção: \n");
    printf ("1. Verificar saldo\n");
    printf ("2. Fazer depósito\n");
    printf ("3. Fazer saque\n");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %f\n", saldo);
        break;
    case 2:
        printf ("Digite o banco que você deseja depositar\n");
        printf ("Digite a agência que você deseja depositar\n");
        printf ("Digite a conta que você deseja depositar\n");
    case 3:
        printf ("Digite o o valor a sacar\n");
    default:
        printf ("Opção inválida\n");
        break;
    }
    return 0;
}