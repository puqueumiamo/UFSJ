#include <stdio.h>
#include <math.h>
int main(){
    float a; //Váriáveis
    float b;
    float c;
    printf("Insira o primeiro valor: ");
    while(scanf("%f", &a) != 1){ //Para caso o scanf dê erro ao tentar ler um valor float, ficar repetindo a pergunta
        printf("Por favor, insira um número: ");
        scanf("%*s", &a); //limpa o caracter inválido inserido
    }
    printf("Insira o segundo valor: ");
    while(scanf("%f", &b) != 1){ //Para caso o scanf dê erro ao tentar ler um valor float, ficar repetindo a pergunta
        printf("Por favor, insira um número: ");
        scanf("%*s", &b); //limpa o caracter inválido inserido
    }
    c = a + b;
    printf("A soma destes dois valores é de %.2f", c); //Print da soma dos valores
    return 0; //Código foi encerrado com sucesso
} 