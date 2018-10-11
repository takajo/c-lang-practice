#include <stdio.h>

int main(void) {
	char  c;
	int i;
	scanf("%c", &c);
	switch(c) {
		case 'A':
		i = 1;
		break;
		case 'B':
		i = 2;
		break;
		case 'C':
		i = 3;
		break;
		case 'D':
		i = 4;
		break;
		case 'E':
		i = 5;
		break;
		default:
		break;
	}
	
	printf("%d\n", i);
	return 0;
}
