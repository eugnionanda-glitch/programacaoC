#include <stdio.h>

int main (){
    int num1 = 37;
    int resultado = num1 % 2;

if (num1 % 2 == 0){
    printf("Num1 é par.\n");
}
else {
    printf("Num1 não é par. O resto da divisão dele por 2 é igual a: %d\n",resultado);
}
    }