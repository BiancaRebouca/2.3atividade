
#include <stdio.h>
#include <math.h>
int main() {
    //armazenamento de dados
    float peso;
    float altura;
    float soma;
    //saída e entrada
    printf("INFORME O SEU PESO EM QUILOGRAMAS : ");
    scanf("%f",&peso);
    
    printf("INFORME SUA ALTURA EM METROS : ");
    scanf("%f",&altura);
    //ação
    soma = peso/(altura*altura);
    //saída
    printf("O SEU IMC E DE %.2f",soma);
}


 












    