//1066 - Pares, Ímpares, Positivos e Negativos

#include <stdio.h>

int main(void) {
  int p = 0, n = 0, par = 0, imp = 0, e, i;

  while(i < 5){
    scanf("%d", &e);

    if(e % 2 == 0 || e == 0) par++;
    else imp++;

    if(e > 0) p++;
    if(e < 0) n++;
    
    i++;
  }

  printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, imp, p, n);

  return 0;
}