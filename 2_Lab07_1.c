#include <stdio.h>
//1094
int main(void) {
	int a[7] = { 64,32,16,8,4,2,1 };
	int n;
	int cnt=0;
	scanf("%d", &n);
	for (int i =0; i < 7; i++) {
		if (n >= a[i]) {
			n -= a[i];
			cnt++;
		}
		if (n == 0)
			break;
	}
	printf("%d", cnt);
	return 0;
}
