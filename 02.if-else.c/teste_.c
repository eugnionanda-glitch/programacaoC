#include <stdio.h>

int main(){
    char nome[10];
    int idade;
    char cor[8];

    printf("Digite seu primeiro nome: %s\n", nome);
    scanf ("%s", &nome);

    printf ("Digite sua idade: %d\n", idade);
    scanf ("%d", &idade);

    printf ("Qual é sua cor favorita? %s\n", cor);
    scanf ("%s", &cor);

    printf("Resultado do teste:\n");
    printf("VOCÊ É PEIDORRENTA. OBRIGADA PELA PARTICIPAÇÃO!");

return 0;
}