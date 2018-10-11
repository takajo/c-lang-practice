#include <stdio.h>

int main (void) {
	int a, b, c;
	scanf("%d%d", &a, &b);
	a % b != 0 ? printf("%d\n", b - (a % b)) : printf("0\n");
	return 0;
}