#include <stdio.h>

int main() {
    int a, b, c, divisao;

    printf("Digite o valor de a: ");
        scanf("%d", &a);
    printf("Digite o valor de b: ");
        scanf("%d", &b);    
    printf("Digite o valor de c: ");
        scanf("%d", &c);

if(a > 1){

divisao = (b + c) / a;
    printf("(%d + %d)/ %d = %d", b, c, a, divisao);
}
else{

    printf("Algo deu errado...\n");
        printf("\nPOSSIVEIS CAUSAS\n");
    printf("[1] O numero nao e inteiro.\n \n[2] Valor digitado de a nao e maior que 1.\n");

}

    return 0;
}