#include <stdio.h>
#include <string.h>

int main(void) {
	int n, sb3, db3;
	int  i = 0, f = 1;
	char acsr[100] = {};
	scanf("%d %s", &n, acsr);
	sb3 = n % 3;
	db3 = n / 3;
	
	if (strlen(acsr) % 2 == 0) f = 0;
	switch (sb3) {
	case 0:
		while (db3) {
			acsr[i] == 'a' ? : f = 0;
			acsr[i + 1] == 'b' ? : f = 0;
			acsr[i + 2] == 'c' ? : f = 0;
			i += 3;
			db3--;
		}
		break;
	case 1:
		while (db3) {
			acsr[i] == 'b' ? : f = 0;
			acsr[i + 1] == 'c' ? : f = 0;
			if(acsr[i + 2] == '\0') break;
			acsr[i + 2] == 'a' ? : f = 0;
			i += 3;
			db3--;
		}
		break;
	case 2:
		while (db3) {
			acsr[i] == 'c' ? : f = 0;
			if(acsr[i + 1] == '\0') break;
			acsr[i + 1] == 'a' ? : f = 0;
			acsr[i + 2] == 'b' ? : f = 0;
			i += 3;
			db3--;
		}
		break;
	}

	f ? printf("%d\n", n / 2) : printf("%d\n", -1);

}


#include <stdio.h>
#include <string.h>

int main(void) {
	int n, sb3, db3;
	int  i = 0, f = 1;
	char acsr[100] = {};
	scanf("%d %s", &n, acsr);
	sb3 = n % 3;
	db3 = n / 3;
	
	if (strlen(acsr) % 2 == 0) f = 0;
	switch (sb3) {
	case 0:
		while (db3) {
			if(acsr[i] != 'a') f = 0;
			if(acsr[i + 1] != 'b') f = 0;
			if(acsr[i + 2] != 'c') f = 0;
			i += 3;
			db3--;
		}
		break;
	case 1:
		while (db3) {
			if(acsr[i] != 'b') f = 0;
			if(acsr[i + 1] != 'c') f = 0;
			if(acsr[i + 2] == '\0') break;
			if(acsr[i + 2] != 'a') f = 0;
			i += 3;
			db3--;
		}
		break;
	case 2:
		while (db3) {
			if(acsr[i] != 'c') f = 0;
			if(acsr[i + 1] == '\0') break;
			if(acsr[i + 1] != 'a') f = 0;
			if(acsr[i + 2] != 'b') f = 0;
			i += 3;
			db3--;
		}
		break;
	}

	f ? printf("%d\n", n / 2) : printf("%d\n", -1);

}


n db2 文字列
3 1 abc
5 2 cabca
7 3 bcabcab
9 4 abcabcabc
11 5 cabcabcabca
13 6 bcabcabcabcab
15 7 abcabcabcabcabc
17 8 cabcabcabcabcabca
19 9 bcabcabcabcabcabcab
21 10 abcabcabcabcabcabcabc
23 11 cabcabcabcabcabcabcabca
25 12 bcabcabcabcabcabcabcabcab

