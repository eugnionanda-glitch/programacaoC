#include <stdio.h>

int main (){
    int nota1;
    int nota2;
    int nota3;
    
printf("**MÉDIAS FINAIS**\n");
printf("Digite a primeira nota do aluno: %d\n", nota1);
scanf("%d",&nota1);

printf("Digite a segunda nota do aluno: %d\n", nota2);
scanf("%d",&nota2);

printf("Digite a terceira nota do aluno: %d\n", nota3);
scanf("%d",&nota3);

int media = nota1 + nota2 + nota3 / 3;
    const char *status;
        if (media >=6){
            status = "Aprovado";
        } else {
            status = "Reprovado";
        }

printf("A média final do aluno é: %d\n", media);
printf("O status final do aluno é: %s\n", status);

}