#include <stdio.h>
//1110
int main(void) {
    int num, new,temp=0;
    int count=0;
    scanf("%d", &num);
    temp = num;
    while (1) {
        new = (num % 10) * 10 + (num / 10 + num % 10) % 10;
        num = new;
        count++;
        if (new == temp)
            break;
    } 
    printf("%d", count);
    return 0;
}
