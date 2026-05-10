#include <stdio.h>
#include <string.h>

int main(){

char senha[100];
char usuario [100];
int repeticao= 3;

do{

printf("Digite seu nome de usuario: ");
    fgets(usuario, sizeof(usuario), stdin);
    usuario[strcspn(usuario, "\n")] = '\0';

printf("Digite  sua senha: ");
    fgets(senha, sizeof(senha), stdin);
    senha[strcspn(senha, "\n")] = '\0';


    
if (strcmp(usuario, "admin") == 0 && strcmp(senha, "admin123") == 0) {
    printf("Login bem-sucedido!\n");
        break;
                }
else{
printf("Algo deu errado tente novamente!  \n");

repeticao--;
}
}while(repeticao > 0);

    printf("Seu cartao foi bloqueado, para mas detalhes entre contato com suporte...");

    return 0;
}