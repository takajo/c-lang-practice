#include <stdio.h>

int main(void) {
	int n, i;
	int ary[101] = {};

	ary[4] = 1;
	ary[7] = 1;
	for (i = 8; i < 101; i++) {
		if (ary[i - 4]) ary[i] = 1;
		if (ary[i - 7]) ary[i] = 1;
	}

	for (i = 0; i < 101; i++) {
		printf("%d ", i);
		printf("%d\n", ary[i]);
	}

	scanf("%d", &n);
	printf(ary[n] ? "Yes\n" : "No\n");
	return 0;
}
