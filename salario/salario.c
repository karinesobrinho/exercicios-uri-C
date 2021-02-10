#include <stdio.h>

int main(){
    int n;
    double hr, s;
    scanf("%d %lf %lf", &n, &hr, &s);
    
    double sf = hr * s;
    printf("NUMBER = %d \nSALARY = U$ %.2lf", n, sf);
    
    return 0;
}