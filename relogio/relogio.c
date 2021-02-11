#include <stdio.h>

int main(){
    int seg;

    scanf("%d", &seg);

    int  h = seg / 3600;
    
    seg %= 3600;

    int m = seg /60;

    seg %= 60;

    int s = seg;
    

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}