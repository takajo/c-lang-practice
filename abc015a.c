#include <stdio.h>

int main (void) {
	char strA[50], strB[50];
	scanf("%s%s", strA, strB);
	strlen(strA) > strlen(strB) ? printf("%s\n", strA) : printf("%s\n", strB);
	return 0;
}