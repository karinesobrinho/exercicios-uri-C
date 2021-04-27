//1067 - Números Ímpares

#include <stdio.h>

int main(void) {
  int i = 0, y;
  scanf("%d", &y);

  while(i <= y){
    if(i%2 != 0){  
      printf("%d\n", i);
    } 
    i++;
  }

  return 0;
}