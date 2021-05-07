//c99
//1073 - Quadrado de Pares

#include <stdio.h>

int main(void) {
  int x;
  long y;
  scanf("%d", &x);

  for(int i = 2; i<= x; i = i + 2){
    y = i * i;
    printf("%d^2 = %ld\n", i, y);    
  }

  return 0;
}