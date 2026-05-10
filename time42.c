#include <stdio.h>

int main(){

int opcoes;
int options;

do{

printf("=======MENU DE SELECAO DE TIME=======");

printf("\n[1] Real Madrid 🇪🇸\n[2] FC Barcelona 🇪🇸\n[3] Bayern de Munique 🇩🇪\n[4] Saida\nEscolha uma opcao:");
 scanf("%d", &opcoes);

switch (opcoes)
{
case 1:
    printf("\nReal Madrid 🇪🇸\n");
        printf("======Deseja saber mais sobre o real Real Madrid?======");

    printf("\n Digite 1 para saber mais... \nEscolha: ");
        scanf("%d", &options);
    
        switch (options)
        {
        case 1:
            printf("\n O Real Madrid é amplamente considerado o maior clube da história do futebol. \nCom 15 títulos da Champions League e 36 títulos da La Liga, os Blancos \nlideram o ranking de popularidade global com impressionantes \n445 milhões de seguidores nas redes sociais.\n"); 
            break;
        }

    break;

case 2:
    printf("\nFC Barcelona 🇪🇸\n");
        printf("======Deseja saber mais sobre o Barcelona?======");

        printf("\n Digite 1 para saber mais... \nEscolha: ");
            scanf("%d", &options);

switch (options)
        {
        case 1:
            printf("O Barcelona é o segundo clube mais seguido do mundo, com cerca de 400 milhões de seguidores. \nJunto ao Real Madrid, domina o futebol espanhol e o cenário europeu, com múltiplas aparições\n entre os melhores times do século.\n"); 
            break;
        }

    break;
case 3:
    printf("\nBayern de Munique 🇩🇪\n");
            printf("======Deseja saber mais sobre o Bayern de Munique?======");
    printf("\n Digite 1 para saber mais... \nEscolha: ");
            scanf("%d", &options);

switch (options)
        {
        case 1:
            printf("O Bayern é a maior potência do futebol alemão, sendo o time que encabeça o ranking dos melhores do século XXI segundo a ESPN.\n O elenco de 2012-13, por exemplo, foi campeão da Champions League goleando o\n Barcelona nas semifinais e marcando 115 gols na Bundesliga naquela temporada.\n"); 
            break;
        }

    break;

default:
    printf("\nSistema encerrado!\n");
        break;
}
    }while(opcoes != 4);

    return 0;
    }
