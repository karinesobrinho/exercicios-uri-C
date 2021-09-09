//2702 - Escolha Difícil

#include <stdio.h>

int main() {
	int c, cp, b, bp, p, pp, f=0;
	scanf("%d %d %d %d %d %d", &c, &b, &p, &cp, &bp, &pp);

	if(cp > c) f += cp - c; 
	if(bp > b) f += bp - b; 
	if(pp > p) f += pp - p; 
	
    printf("%d\n", f);
    return 0;
}