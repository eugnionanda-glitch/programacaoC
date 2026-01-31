#include <stdio.h>

    int main(){

        int index;

        char * nomesAlunos [3][3] = {
            {"Aluno 0", "Pt: 30", "Mat: 90"},
            {"Aluno 1", "Pt: 60", "Mat: 60"},
            {"Aluno 2", "Pt: 30", "Mat: 30"}
        };

        printf("Notas dos Alunos\n");
        printf("Digite o número correspondente ao aluno (0, 1 ou 2): ");
        scanf("%d", &index);
        printf("O aluno %s tem as seguintes notas: %s, %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
        printf("Consulta concluída.\n");
        
    return 0;
    }
