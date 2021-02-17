#include <stdio.h>

int main(){
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);

    double media = (x + y + z) / 3;
    printf("A média dos valores é %.2lf", media);

    return 0;
}