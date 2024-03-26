#include <stdio.h>
#include <math.h>
int main(){
    float a; //Variáveis
    float b;
    float c;
    printf("Quantos quilômetros foram andados com o automóvel?\n");
    while(scanf("%f", &a) != 1){ //Em caso do usuário colocar um valor inválido, ficar perguntando até ele colocar um valor válido
        printf("Por favor insira um valor númerico válido: ");
        scanf("%*s", &a); //limpa o buffer
    }
    printf("Quantos litros de combustível foram gastos para percorrer esta distância?\n");
    while(scanf("%f", &b) != 1){
        printf("Por favor insira um valor numérico válido: ");
        scanf("%*s", &b); //limpa o buffer
    }
    c = a / b; // Consumo do veículo
    printf("O consumo médio do veículo é de %.2f Km/l.", c);
    return 0; //Código foi encerrado com sucesso
}