#include <stdio.h>

int main(void) {
	int n, r, f;
	scanf("%d", &n);
	n % 3 == 0 ? f = 1 : f = 0;
	/*
    if(n % 3 == 0) {
		f = 1 ;
	} else {
		f = 0;
	}
    */
	do {
		r = n % 10;
		n = n / 10;
		if(r == 3) f = 1;
	}while(r != 0);
	
	f == 1 ? printf("YES\n") : printf("NO\n");
	return 0;
}
