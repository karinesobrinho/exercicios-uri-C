//1065 - Pares entre Cinco Números

#include <stdio.h>

int main(void) {
  int par = 0, e, i = 0;

  while(i < 5){
    scanf("%d", &e);

    if(e % 2 == 0 || e == 0) par++;
    
    i++;
  }

  printf("%d valores pares\n", par);

  return 0;
}