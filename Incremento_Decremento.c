#include <stdio.h>
    int main(){
    /*
    Atribuição simples (=)
    Atribuição composta (+=, -=, *=, /=)
    */

    int numero;
    printf("Entre com um número: \n");
    scanf ("%d",&numero);

    //Atribuição simples
    numero = 10;
    printf("Valor após atribuição simples: %d\n", numero);

    //Atribuição composta de soma
    numero += 5; //equivalente a numero = numero + 5
    printf("Valor após atribuição composta de soma: %d\n", numero);

    //Atribuição composta de subtração
    numero -= 3; //equivalente a numero = numero - 3
    printf("Valor após atribuição composta de subtração: %d\n", numero);

    //Atribuição composta de multiplicação
    numero *= 2; //equivalente a numero = numero * 2
    printf("Valor após atribuição composta de multiplicação: %d\n", numero);

    //Atribuição composta de divisão
    numero /= 4; //equivalente a numero = numero / 4
    printf("Valor após atribuição composta de divisão: %d\n", numero);
    }