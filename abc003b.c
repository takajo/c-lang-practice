#include <stdio.h>

int main(void) {
	int i, j, len, m, f = 1;
	char str[11] = {}, cpr[11] = {}, atm[] = "atcoder@";
	int atmlen = sizeof(atm) - 2;
	scanf("%s", str);
	scanf("%s", cpr);
	len = strlen(str);

	if (strlen(str) != strlen(cpr)) f = 0;
	for (i = 0; i < len; i++) {
		m = 0;
		if (str[i] != cpr[i]) {
			if (str[i] == '@') {
				for (j = 0; j < atmlen; j++) {
					if (cpr[i] == atm[j]) m = 1;
					if (m != 1 && j == atmlen - 1) f = 0;
				}
			}
			else if (cpr[i] == '@') {
				for (j = 0; j < atmlen; j++) {
					if (str[i] == atm[j]) m = 1;
					if (m != 1 && j == atmlen - 1) f = 0;
				}
			}
			else {
				f = 0;
			}
		}
		if (f == 0) break;
	}
	f ? printf("You can win\n") : printf("You will lose\n");
	return 0;
}