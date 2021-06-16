#include <stdio.h> //Biblioteca que contem orintf e scanf

int main(void){
    float numero, maior; //Numero e maior sao reais
    scanf("%f",&numero); //Lendo primeiro numero
    maior = numero; //Definindo esse numero como o maior
    for(int i=0; i<9; i++){ //For com as nove iteracoes restantes
        scanf("%f",numero); //Lendo numero
        if(numero > maior){ //Se numero lido for maior que o maior:
            maior = numero; //O maior recebera esse numero
        }
    }
    printf("Maior: %f", maior); //Exibe o maior numero na tela
    return 0;
}