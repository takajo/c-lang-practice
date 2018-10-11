#include <stdio.h>

int main (void) {
	int s, e, ans = 0,  i;
	for(i = 0; i < 3; i++) {
		scanf("%d %d", &s, &e);
		ans += s * e *0.1;
	}
	printf("%d\n", ans);
	return 0;
}