 #include <stdio.h>

 int main(){

int num, soma;
int num_2= 0;

for(int i = 0; i < 3; i++){

printf("Digite 3 numero para tirar a media(Digite 0 para encerrar): ");
    scanf("%d", &num);

if (num == 0) {
printf("Encerrando o programa.\n");
        break;
}

else if( num %2 != 0){
    printf("Digite apenas numeros pares!\n");
    continue;
i--;
}

soma += num;
num_2++ ;

}

if (num_2 > 0) {
    printf("A media dos numeros e: %d\n", soma / num_2);
} else {
    printf("Nenhum numero valido foi digitado.\n");
}

    return 0;
} 