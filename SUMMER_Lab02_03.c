//11005
#include <stdio.h>

int main() {
#ifdef _WIN32
    freopen("input.txt", "r", stdin);
#endif // _WIN32
    int n, b;
    scanf("%d %d", &n, &b);

    char res[30];
    int t, idx = 0;

    while (n) {
        t = n % b;
        res[idx++] = t < 10 ? t + '0' : t - 10 + 'A';
        n /= b;
    }

    while (--idx >= 0) printf("%c", res[idx]);
    puts("");

    return 0;
}

