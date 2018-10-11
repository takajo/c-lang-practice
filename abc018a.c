#include <stdio.h>

enum {
	min, mid, max,
}

int main(void) {
	int scr[3] = {}, rnk[3] = {}, i, j;
	
	for (i = 0; i < 3; i++) scanf("%d", &scr[i]);
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j< 3; j++) {
			if(scr[i] < scr[j]) rnk[j]++;
		}
	}
	
	for (i = 0; i < 3; i++)  printf("%d\n", rnk[i] + 1);
	
	return 0;
}