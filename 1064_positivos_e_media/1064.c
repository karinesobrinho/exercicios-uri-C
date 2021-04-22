//1064 - Positivos e Média

#include <stdio.h>

int main(void) {
  int p = 0, d = 0;
  double e, i = 0;
  double s = 0;

  while(i < 6){
    scanf("%lf", &e);

    if(e > 0) {
    p++;
    s = s + e;
    d++;
    }
    i++;
  }

  printf("%d valores positivos\n%0.1lf\n", p, s/d);

  return 0;
}