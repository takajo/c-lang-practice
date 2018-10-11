#include <stdio.h>

int main (void) {
	int m, d;
	scanf("%d%d", &m, &d);
	m % d == 0 ? printf("YES\n") : printf("NO\n");
	return 0;
}