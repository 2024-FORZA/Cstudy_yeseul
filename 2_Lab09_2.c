#include <stdio.h>
#include <stdlib.h>
// 1356
int main(void) {
    int i = 0;
    int* num;
    int n, temp,front, back;
    char ans[4] = "NO";
    scanf("%d", &n);

    // 자릿수 계산
    temp = n;
    while (temp != 0) {
        temp/= 10; 
        i++;
    }
    num = (int*)malloc(sizeof(int) * i); //받은 숫자의 각 자릿수 저장할 배열
    for (int j = i - 1; j >= 0; j--) {
        num[j] = n % 10; 
        n /= 10;
    }

    for (int j = 0; j < i - 1; j++) { 
        front = 1, back = 1;
        for (int k = 0; k <= j; k++) // 앞자릿수 곱
            front *= num[k];
        for (int k = j + 1; k < i; k++) // 뒷자릿수 곱
            back *= num[k];
        
        if (front == back) {
            strcpy(ans,"YES");
            break;
        }
    }
    free(num);
    printf("%s\n", ans);
    return 0;
}
