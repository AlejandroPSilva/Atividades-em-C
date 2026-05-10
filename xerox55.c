#include <stdio.h>


int main(){

int copiaXerox;
int folhas;
float valor;

printf("Digite o tanto de copias que deseja fazer xerox: ");
    scanf("%d", &copiaXerox);

if(copiaXerox < 100){
printf("O valor de %d copias: %.2f\n",copiaXerox, valor = copiaXerox * 0.25);
    
}
else if(copiaXerox >= 100){

printf("O valor de %d copias: %.2f\n",copiaXerox, valor = copiaXerox * 0.20);

}

    return 0;
}