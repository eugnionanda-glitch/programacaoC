#include <stdio.h>

int main (){
    int nota1;
    int nota2;
    int nota3;
    int media = (nota1 + nota2 + nota3) / 3;
    const char *status;
        if (media >=6){
            status = "Aprovado";
        } else {
            status = "Reprovado";
        }
    
printf("**MÉDIAS FINAIS**\n");
printf("Digite a primeira nota do aluno: \n");
scanf("%d",&nota1);

printf("Digite a segunda nota do aluno: \n");
scanf("%d",&nota2);

printf("Digite a terceira nota do aluno: \n");
scanf("%d",&nota3);



printf("A média final do aluno é: %.2f\n", media);
printf("O status final do aluno é: %s\n", status);

}