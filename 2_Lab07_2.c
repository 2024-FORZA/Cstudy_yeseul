#include <stdio.h>
//2231
int main(void) {
	int n = 0; // 입력받을 수
	int gen = 0; // 생성자
	scanf("%d", &n);

	for (int i = 1; i < n; i++) { // i는 생성자
		int k = 0; //k는 자릿수의 합
		int j = 1;
		int sum;
		int temp = i;

		while (temp % 10 > 0) {
			k += temp % 10;
			temp /= 10;
		}

		sum = i + k; //i와 i 자릿수의 합

		if (n == sum) { 
			gen = i;
			break;
		}

	}
	
	printf("%d", gen);
	return 0;
}
