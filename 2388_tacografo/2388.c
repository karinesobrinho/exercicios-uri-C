//2388 tacografo
//c

#include <stdio.h>

int main(){
    int x, v, t, r = 0;
    scanf("%d", &x);

    while(x!= 0){
		scanf("%d %d", &t, &v);
		r += t*v;
		x--;
	}
	
    printf("%d\n", r);
	
    return 0;
}