//c99
//1070 - Seis Números Ímpares

#include <stdio.h>

int main(void) {
  int x, i;
  scanf("%d", &x);

  if(x%2 == 0){ 
    i = x + 1;
  } else i = x;

  for(int j = 0; j <= 5; j++){
    printf("%d\n", i);
    i = i + 2;    
  }

  return 0;
}