#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int tempototal, thora, tmin, tseg;
  float msInicial, msFinal;

  printf("Massa Inicial (em Gramas):\n");
  scanf("%f", &msInicial);

  msFinal = msInicial;
  tempototal = 0;
  while (msFinal >= 0.5) {
    msFinal = msFinal / 2;
    tempototal = tempototal + 50;
  }

  printf("\n");
  printf("Massa Inicial: %7.0f gramas.\n", msInicial);
  printf("Massa Final: %9.2f gramas.\n", msFinal);

  printf("\n");
  printf("Tempo Total...: %d segundos.\n", tempototal);
  thora = (tempototal / 3600);
  tmin = (tempototal % 3600) / 60;
  tseg = (tempototal % 3600) % 60;
  printf("Tempo Dividido: %d horas:%d minutos:%d segundos.", thora, tmin, tseg);
}
