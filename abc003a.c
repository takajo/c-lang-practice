#include <stdio.h>

int calc (int n);

int main(void) {
	int n, pay;
	scanf("%d", &n);
	pay = calc(n);
	printf("%d\n", pay);
	return 0;
}

int calc (int n) {
	int hld = n, pay = 0;
	for(n; n > 0; n--) {
		pay += 10000 * n;
	}
	
	return pay / hld;
}