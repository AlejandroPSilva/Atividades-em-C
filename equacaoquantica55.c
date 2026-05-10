#include <stdio.h>

int main(){

float t,g=9.8, formula;

printf("Digite o tempo: ");
    scanf("%f", &t);


formula= g * t;

printf("O resutado e %.2f m/s\n", formula);

    return 0;
}