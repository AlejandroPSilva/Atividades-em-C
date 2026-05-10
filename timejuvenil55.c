#include <stdio.h>

int main(){

int idade;

printf("Digite sua idade para sua classificacao: ");
    scanf("%d", &idade);
if(idade <= 13){    
    printf("Voce esta na categoria infantil\n");
}
else if(idade < 17){
    printf("Voce esta na categoria juvenil\n");
}
if(idade >= 17){
    printf("Voce esta na categoria senior\n");
}


    return 0; 
}