#include <locale.h>
#include <stdio.h>
int main(void) {
  // usar idioma Brasileiro
  setlocale(LC_ALL, "Portuguese");

  // variáveis
  double valor[] = {22174.1664, 24537.6698, 26139.6134, 0.0,        0.0,
                    26742.6612, 0.0,        42889.2258, 46251.174,  11191.4722,
                    0.0,        0.0,        3847.4823,  373.7838,   2659.7563,
                    48924.2448, 18419.2614, 0.0,        0.0,        35240.1826,
                    43829.1667, 18235.6852, 4355.0662,  13327.1025, 0.0,
                    0.0,        25681.8318, 1718.1221,  13220.495,  8414.61};
  // max[] = {valor, dia} mix[] = {valor, dia}
  double max[] = {valor[0], 1}, min[] = {valor[0], 1}, soma = 0, media, dias = 0;
  int diasmaior;

  // calcular
  for (int i = 0; i < 30; i++) {
    // calcular apenas dias > 0
    if (valor[i] > 0) {

      soma += valor[i];
      dias++;
      // ver valor max, salvar valor e dia
      if (valor[i] > max[0]) {
        max[0] = valor[i];
        max[1] = i + 1;
      }
      // ver valor min
      if (valor[i] < min[0]) {
        min[0] = valor[i];
        min[1] = i + 1;
      }

      // fim if
    }

    // fim for
  }
  // calcular média
  media = soma / dias;
  // calcular dias
  for (int i = 0; i < 30; i++) {

    // contar dia > media
    if (valor[i] > media)
      diasmaior++;

    // fim for
  }

  // exibir
  printf("\nO maior valor foi %.4f no dia %.f", max[0], max[1]);
  printf("\nO menor valor foi %.4f no dia %.f", min[0], min[1]);
  printf("\nNúmeros de dias que foram maior que a média mensal de %.4f foi %d dia(s)", media, diasmaior);
}
