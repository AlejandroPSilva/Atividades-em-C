#include <stdio.h>

int main(){

float consumoM, distanciaT, combustivel ;

printf("Digite a distancia percorrida: ");
    scanf("%f", &distanciaT);

printf("Digite o valor medio do combustivel na regiao: ");
    scanf("%f", &combustivel);

if (combustivel <= 0) {
        printf("Erro...\n");
        return 1;
    }

    consumoM = distanciaT / combustivel;

    printf("\nConsumo medio: %.2f km/L\n", consumoM);

    return 0;
}