#include <stdio.h>

int main() {
    float salario;
    float soma_salario = 0, maior_salario = 0;
    int filhos, total_pessoas = 0, filhos_total = 0, ate_100 = 0;

    printf("Digite salario (negativo para parar): ");
    scanf("%f", &salario);

   while(salario >= 0){

printf("Digit   e quantidade de filho: ");
    scanf("%d", &filhos);

soma_salario += salario; 

filhos_total += filhos;

if(salario > maior_salario) {
            maior_salario = salario;
        }
 
if(salario <= 100){
ate_100++;


}
    total_pessoas++;

    printf("Proximo salario (negativo para parar): ");
        scanf("%f", &salario);
   }

    float media_salario = soma_salario / total_pessoas;
float media_filhos = (float)filhos_total / total_pessoas;
    float percentual_100 = (ate_100 * 100.0) / total_pessoas;
   
printf("a) Media salario: R$ %.2f\n", media_salario);
printf("b) Media filhos: %.1f\n", media_filhos);
printf("c) Maior salario: R$ %.2f\n", maior_salario);
printf("d) %% ate R$100: %.1f%%\n", percentual_100);

    return 0;
}