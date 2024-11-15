#include <stdio.h>
#include <stdlib.h>
//14720
int main(void) {
	int count = 0; // 마실 수 있는 우유 최대 개수
	int n; // 가게 수
	scanf("%d", &n);
	int* milk = (int*)malloc(n * sizeof(int));
	if (milk == NULL) {
		printf("메모리 할당 실패\n");
		return 0;
	}
	for (int i = 0; i < n; i++)
		scanf("%d", &milk[i]);

	int pick = 0;

	for (int j = 0; j < n; j++) {
		if (milk[j] == pick) {
			pick = (pick + 1) % 3;
			count++;
		}
	}

	printf("%d", count);
	free(milk);
	return 0;

	}
