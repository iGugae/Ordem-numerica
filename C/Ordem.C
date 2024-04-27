#include <stdio.h>
int main(void){
    //Variáveis
    int contador, organizador, ordem[5], troca;

    //Entrada dos números
    printf("Digite 5 digitos e eu colocarei em ordem numerica! \n");
    for (contador = 0; contador < 5; contador++){
        printf("Digite o %d numero: ", contador+1);
        scanf("%d", &ordem[contador]);
    }

    //Entrando no looping
    printf("Analisando...\n");
    for (organizador = 0; organizador < 4; organizador++){
        for (contador = organizador+1; contador < 5; contador++){
            if (ordem[organizador] > ordem[contador]){
                troca = ordem[contador];
                ordem[contador] = ordem[organizador];
                ordem[organizador] = troca;
            }
        }
    }

    //Resultado
    printf("Os numeros em ordem sao: \n");
    for (organizador = 0; organizador < 5; organizador++){
        printf("%d  ",ordem[organizador]);
    }
}
