#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2609
int gcd(int a, int b) {
	if (b == 0) 
        return a;
	else 
        return gcd(b, a % b);
}
int main () {
    int a, b, temp;
    scanf("%d %d", &a, &b);
    temp = gcd(a, b);
    printf("%d\n%d", temp, a*b/temp);
    return 0;
}
