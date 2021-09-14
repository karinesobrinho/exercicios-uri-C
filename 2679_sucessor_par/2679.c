// 2679 sucessor par
//c

#include <stdio.h>

int main(){
	long x;
    scanf("%ld", &x);
	
	if(x%2 == 0)
		printf("%ld\n", x+2);
	else printf("%ld\n", x+1);
		
    return 0;
}