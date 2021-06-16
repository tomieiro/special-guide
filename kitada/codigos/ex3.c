#include <stdio.h> //Biblioteca que contem orintf e scanf

int main(void){
    int n, fatorial = 1; //n e fatorial sao inteiros
    scanf("%d", &n); //Disponibilidade com n <= 12
    if(n == 0){ //Caso seja zero
        printf("n! = 0\n"); //Mostra zero
        return 0; //E termina o programa
    }
    for(int i=2; i<=n; i++){ //For com n iteracoes
        fatorial = fatorial * i; //Calcula o fatorial multiplicando ele mesmo por i
    }
    printf("n! = %d\n",fatorial); //Mostra resultado
    return 0;
}