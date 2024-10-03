#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//9501
int main() {
    int t;  
    scanf("%d", &t);

    while (t--) {
        int n, d, cnt = 0;
        scanf("%d %d", &n, &d);

        for (int i = 0; i < n; i++) {
            int v, f, c;
            scanf("%d %d %d", &v, &f, &c);

            
            if ((double)d / v * c <= f) {
                cnt++;
            }
        }

        printf("%d\n", cnt);
    }

    return 0;
}
