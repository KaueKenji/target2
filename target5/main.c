#include <locale.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  // usar idioma Brasileiro
  setlocale(LC_ALL, "Portuguese");

  //variaveis
  char string[50] ;

  //entrada
  printf("\nDigite a string: ");
  scanf("%s", string);
char string2[strlen(string)];

  
  //reordenar
  char aux, posifinal;
  for(int i = 0; i < strlen(string) ; i++){
    //saber a ultima posicao do vetor
    posifinal = strlen(string) - i - 1;
    
    //farzer a troca pelo ultimo
    string2[i] = string[posifinal];
    
    
    //fim for
  }

  //exibir
   printf("\nString invertida: %s ", string2);
}