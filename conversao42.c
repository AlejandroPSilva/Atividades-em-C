#include <stdio.h>

int main(){

long conversao, milimetros = 1000;
int metros;
printf("Digite o valor em metro: ");
    scanf("%d", &metros);

conversao = metros * milimetros;

printf("O valor da conversao em milimitros: %ld\n", conversao);


    return 0;
}