#include <stdio.h>
#include <locale.h>
int main(void) {
  // usar idioma Brasileiro
  setlocale(LC_ALL, "Portuguese");
  
  //variáveis
  int fibo1=0, fibo2=1, pesquisa;

  //entrada
  printf("\nDigite o número de pesquisa:");
  scanf("%d", &pesquisa);

  //fibonacci
  do{ 
    //somar prox número da sequência
    fibo2 = fibo1 + fibo2;
    //passar o valor antigo de fibo2 para fibo1
    fibo1 = fibo2 - fibo1;
   
    //fim do while    
  }while(fibo2 < pesquisa );

  //saída
   //conferir se o número faz parte
  if(pesquisa == fibo2){
      printf("\nO número %d faz parte da sequência de fibonacci!", pesquisa);      
      //fim if
    }
  else{
     printf("\nO número %d não faz parte da sequência de fibonacci!", pesquisa);  
    //fim else
  }
}