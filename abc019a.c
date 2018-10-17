#include <stdio.h>

int main(void) {
	int abc[3] = {}, i, j, tmp;
	for(i = 0; i < 3; i++) scanf("%d", &abc[i]);
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			if(abc[i] > abc[j]) {
				tmp = abc[j];
				abc[j] = abc[i];
				abc[i] = tmp;
			}
		}
	}
	
	printf("%d\n", abc[1]);
	
	return 0;
}