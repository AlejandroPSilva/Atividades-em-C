 #include <stdio.h>

int main(){

float aumento, funcionariosalario, taxa = 0.10, soma;

printf("Digite o seu salario: ");
    scanf("%f", &funcionariosalario);

if(funcionariosalario <= 1000){
    
aumento = funcionariosalario * taxa;

    printf("\nO aumento foi de: %.2f", aumento);

soma = aumento + funcionariosalario;
    
    printf("\nNovo salario: %.2f\n", soma);

} else{

  printf("Salario acima de R$ 1000,00. Sem direito a aumento.\n");

}
    return 0;
}