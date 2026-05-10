#include <stdio.h>

int main(){

int num;
int repeticao;
for(int i = 0; i < 5; i++){
    printf("Digite o numero: ");
        scanf("%d", &num);
    if(num < 0){
        repeticao++;
    }
}
printf("Total de numeros negativos: %d\n", repeticao);

    return 0;
}