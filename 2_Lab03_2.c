#include <stdio.h>
//1357
int Rev(int n) {
    int num = 0;
    while (n > 0) {
        num = num * 10 + n % 10;
        n /= 10;
    }
    return num;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", Rev(Rev(x) + Rev(y)));
    return 0;
}
