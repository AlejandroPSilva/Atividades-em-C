#include <stdio.h>

int main(){

int num;
int impar= 0 ,par= 0;

for(int i= 0;i < 10; i++){

printf("Digite 10 numeros inteiros:");
    scanf("%d", &num);

if(num %2 == 0){
par++;
    }
else{
impar++;

    }
}
printf("IPARES: %d \n", impar);
printf("PARES: %d \n", par);

    return 0;
}