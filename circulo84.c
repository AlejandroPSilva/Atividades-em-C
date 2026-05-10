#include <stdio.h>
#include <math.h>
int main(){
float A, pi = 3.14, r;
char continuar;
do{
printf("Digite o valor do r: ");    
    scanf("%f", &r);
A= pi * pow(r, 2);
printf("A= π ₓ r²");
printf("\nA = %.2f ₓ %.2f²\n A= %.2f\n",pi , r, A);
printf("Deseja calcular outro circulo? (s/n): ");
        scanf(" %c", &continuar);
}while(continuar == 's' || continuar == 'S');
printf("Sistema encerrado!");
    return 0;
} 