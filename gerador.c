// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int a = 0 ;
int batata = 0;
int gera_1(){
    srand(time(NULL));
   a = (rand()%(4-1)) ;
    int num = (rand() % (0 - 99 + 1)) + a;
    
    return num ;
}
int main() {
    // char senha[9];        // palavra de 8 letras
    //gerarPalavra(senha, 8);
     batata = gera_1()*a ; 
  printf("Sua Senha agr é : %d %d ",gera_1(),batata);
    return 0;
}
