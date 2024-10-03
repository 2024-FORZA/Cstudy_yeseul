#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//29722
int main(void) {
    int y, m, d, N;

    scanf("%d-%d-%d", &y, &m, &d);

    scanf("%d", &N);


    d += N;

    m += (d - 1) / 30;
    d = (d - 1) % 30 + 1;


    y += (m - 1) / 12;
    m = (m - 1) % 12 + 1;


    printf("%04d-%02d-%02d\n", y, m, d);

    return 0;
}
