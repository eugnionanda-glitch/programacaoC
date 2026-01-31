#include <stdio.h>

    #define Linhas 5
    #define Colunas 5

int main(){

    int matriz [Linhas][Colunas];
    int i, j;

for (int i = 0; i < Linhas; i++)
{
    for (int j = 0; j < Colunas; j++)
    {
        matriz[i][j] = i + j;
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}


}