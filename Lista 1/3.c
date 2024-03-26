#include <stdio.h>
#include <math.h>
int main(){
    float a; //Váriáveis
    float b;
    float c;
    float d;
    float e;
    float f;
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
    c = a + b; //Operações
    d = a - b;
    e = a * b;
    f = a / b;
    printf("Soma: %.2f\nSubtração: %.2f\nMultiplicação: %.2f\nDivisão: %.2f", c, d, e, f); //Print das operações com os valores
    return 0; //Código foi encerrado com sucesso
} 