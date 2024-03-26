#include <stdio.h>
#include <math.h>
int main(){
    char a[100];
    float b; //Salário fixo
    float c; //Produtos vendidos
    float d; //Salário fixo + 15% das vendas 
    printf("Qual o nome do vendedor?\n"); //nome do vendedor
    scanf("%s", &a);
    printf("Qual o salário fixo dele?\n"); 
    while(scanf("%f", &b) != 1){ //caso o valor não seja numérico perguntar até um valor válido ser inserido
        printf("Insira um valor numérico: ");
        scanf("%*s", &b); //limpar buffer
    }
    printf("Insira o valor da quantidade total de produtos vendidos: ");
    while(scanf("%f", &c) != 1){ //caso o valor não seja numérico perguntar até um valor válido ser inserido
        printf("Insira um valor númerico: ");
        scanf("%*s", &c); //limpar buffer
    }
    d = b + ((c/100) * 15); // Conta pra achar o salário total no final do mês
    printf("Vendedor: %s\nSalário Fixo: %.2f\nSalário pós comissões: %.2f", a, b, d);
    return 0; //Programa encerrado com sucesso
}