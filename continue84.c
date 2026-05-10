 #include <stdio.h>

 int main(){

long num1, num2;
double resultado;

do{

printf("Digite o primeiro numero:");
    scanf("%ld", &num1);

printf("Digite o segundo numero: ");
    scanf("%ld", &num2);

if(num2 == 0){
    printf("Nao e possivel dividir por zero, tente novamente.\n");
        continue;
}
else{
        resultado= (double)num1 / num2;
    printf("A divisao de %ld/%ld = %.2lf \n", num1, num2, resultado);
    break;
}

}while(1);

    printf("\nSistema encerrado!\n");
    return 0;
 }