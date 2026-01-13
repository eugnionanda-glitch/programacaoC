//verificamos se a temperatura está entre 20 e 30 graus, e se a umidade está acima de 50%

#include <stdio.h>
    int main(){
        float temperatura = 25.0;
        float umidade = 20.0;

    if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0){
        printf ("As condições estão favoráveis.\n");
    } else {
        printf ("As condições não estão favoráveis.\n");
    }
    }