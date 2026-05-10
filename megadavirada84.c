#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int num;

srand(time(NULL));

for(int i= 1; i <= 6; i++){

num= 1 + rand() % 60;
  printf("%02d ", num);

}
 
    return 0;
}