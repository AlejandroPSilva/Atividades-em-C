#include <stdio.h>
#include <math.h>

    int main(){

int a, b, c, fixo = 4;
float valorx1, valorx2, delta;

printf("Digite o valor de A: ");
        scanf("%d", &a);

printf("Digite o valor de B: ");
        scanf("%d", &b);

printf("Digite o valor de C: ");
        scanf("%d", &c);

if (a == 0) {
        printf("Erro: 'a' nao pode ser zero!\n");
        return 1;
}

printf("\n%dx² + %dx + %d = 0\n", a, b, c);

printf("\nΔ = %d² - %d x %d x %d\n", b, fixo, a, c);


delta= (b * b)- fixo * a * c;

printf("\nValor de Δ= %.2f\n", delta);


if(delta < 0){
    printf("O Resultado e negativo a conta acaba aqui.\n");
} 

else if (delta == 0) {
        valorx1 = -b / (2.0 * a);
        printf("Raiz dupla: X = %.2f\n", valorx1);
}
else{

valorx1= (-b + sqrt(delta)) / (2 * a);
valorx2= (-b - sqrt(delta)) / (2 * a);

printf("resultado X1: %.2f\n", valorx1);
printf("resultado X2: %.2f\n", valorx2);

}

        return 0;
    }