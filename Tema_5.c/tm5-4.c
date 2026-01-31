#include <stdio.h>

int main(){
    int vetor[5]; //variável do tipo inteiro, chamada vetor, que terá 5 elementos inteiros

//Inicializando a variável vetor com recurso de loop, estrutura for
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = i * 2; //vai percorrer cada valor de i (começando com 0) enquanto ele for menor que 5 vai 
                            //multiplicar i por 2 e ir guardando o resultado na posição i do vetor que guardará
                            // 5 valores
    printf("vetor[%d] = %d\n", i, vetor[i]); //imprime o valor de cada i percorrido pelo for
       }
    
}