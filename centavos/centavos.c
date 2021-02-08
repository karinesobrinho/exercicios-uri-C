#include <stdio.h>

int main(){
    int cent;

    scanf("%d", &cent);

    int  moeda1r = cent / 100;
    
    cent %= 100;

    int moeda50c = cent /50;

    cent %= 50;

    int moeda25c = cent /25;

    cent %= 25;

    int moeda10c = cent /10;

    cent %= 10;

    int moeda5c = cent /5;

    cent %= 5;

    int moeda1c = cent /1;

    cent %= 1;
    

    printf("%d %d %d %d %d %d\n", moeda1r, moeda50c, moeda25c, moeda10c, moeda5c, moeda1c);

    return 0;
}