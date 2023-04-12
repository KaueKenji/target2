#include <locale.h>
#include <stdio.h>
int main(void) {
  // usar idioma Brasileiro
  setlocale(LC_ALL, "Portuguese");
  // variáveis valor[] = {SP, RJ, MG, ES, Outros}
  char estados[][6] = {"SP", "RJ", "MG", "ES", "Outros"};
  double valor[] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};

  double percent, total = 0;

  // percentual
  for (int i = 0; i < 5; i++) {
    // calcular 100%
    total += valor[i];
  }
  for (int i = 0; i < 5; i++) {
    // calcular 100%
    percent = valor[i] / total * 100;
    printf("\nPercentual %s: %.2f %%", estados[i], percent);
    //fim for
  }
}