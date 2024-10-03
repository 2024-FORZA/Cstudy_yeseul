#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//5585
int main(void) {
	int coin[] = { 500,100,50,10,5,1 };
	int money,change;
	int i = 0;
	int count = 0;
	scanf("%d", &money);

	

	change = 1000 - money;

	while (change != 0) {
		if (change >= coin[i]) {
			change -= coin[i];
			count += 1;
		}
		else {

			i += 1;

		}
	}
	
	printf("%d", count);
	return 0;
}
