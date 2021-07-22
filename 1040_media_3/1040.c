//1040 - Média 3

#include <stdio.h>

void teste(int media, double ap){
  if(media >= ap) printf("Aluno aprovado.\n");
  else printf("Aluno reprovado.\n");
}

int main(void) {
  double a, b, c, d, e, notaFinal;
  scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

  notaFinal = ((a*2)+(b*3)+(c*4)+d)/10;
  printf("Media: %0.1lf\n", notaFinal);

  if(notaFinal >= 5.0 && notaFinal <= 6.9){ 
    scanf("%lf", &e);
    printf("Aluno em exame.\nNota do exame: %0.1lf\n", e);
    notaFinal = (notaFinal + e)/2;
    teste(notaFinal, 5.0);
    printf("Media final: %0.1lf\n", notaFinal); 
  } else teste(notaFinal, 7.0);

  return 0;
}