#include <stdio.h>
#include <math.h>
int main(){
    float r;
    float c;
    printf("Insira o raio do circulo: ");
    while(scanf("%f", &r) != 1 || r < 0){ //Caso um numero negativo ou outros simbolos sejam inseridos, ficar repetindo a pergunta.
        printf("Número invalido, por favor, insira novamente: ");
        scanf("%*s", &r); //limpar buffer
    }
    c = 2* M_PI * r; //M_PI é da math.h e é o valor aproximado de π
    printf("O comprimento do dessa circunferência é de %.2f.", c);
    return 0; //Código encerrado com sucesso
}