#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//9550
int main() {
    int t;  
    scanf("%d", &t);

    while (t--) {
        int N, K, answer = 0;
        scanf("%d %d", &N, &K);

        int candy[N];  
        for (int i = 0; i < N; i++) {
            scanf("%d", &candy[i]);
        }

        for (int i = 0; i < N; i++) {
            answer += candy[i] / K;  
        }

        printf("%d\n", answer);  
    }

    return 0;
}
