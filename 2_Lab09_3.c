#include <stdio.h>
// 2669
int main(void) {
    int arr[100][100] = { 0 }; 
    int a, b, c, d, sum = 0;

 
    for (int i = 0; i < 4; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        for (int x = a; x < c; x++) {       
            for (int y = b; y < d; y++) {   
                arr[x][y] = 1;              
            }
        }
    }

    for (int x = 0; x < 100; x++) {
        for (int y = 0; y < 100; y++) {
            sum += arr[x][y];
        }
    }

    printf("%d\n", sum);
    return 0;
}
