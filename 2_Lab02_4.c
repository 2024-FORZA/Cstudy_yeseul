#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//3460
int main() {
    int T, n;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &n);
        int digit = 0;
        while (n > 0) {
            if (n % 2 == 1) {
                printf("%d ", digit);
            }
            n /= 2;
            digit++;
        }
        printf("\n"); 
    }
    return 0;
}
