//1072 - Intervalo 2

#include <stdio.h>

int main(void) {
  int i = 0, o = 0, a = 0;
  long y, x;
  scanf("%ld", &y);

  while(a < y){
    scanf("%ld", &x);
    if(x >= 10 && x <= 20){
      i++;
    } else o++;
    a++;
  }

  printf("%d in\n%d out\n", i, o);

  return 0;
}