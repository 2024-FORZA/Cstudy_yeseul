#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1712
int main(void) {
	int a,b,c,n;
	scanf("%d %d %d", &a, &b, &c);
	
	if (c <= b) {
		printf("-1");
	}
	else {
		n = a / (c - b) + 1;
		printf("%d", n);
	}

	return 0;
}
