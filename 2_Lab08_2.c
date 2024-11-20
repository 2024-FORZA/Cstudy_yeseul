#include <stdio.h>
//1925
int main() {
    int a1, a2, b1, b2, c1, c2;
    int l1, l2, l3, l123[3];
    int temp;
    int x1, x2, x3, y1, y2, y3;
    int s;

    // 입력 받기
    scanf("%d %d", &a1, &a2);
    scanf("%d %d", &b1, &b2);
    scanf("%d %d", &c1, &c2);

    // 거리 제곱 계산
    l1 = (a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2);
    l2 = (c1 - b1) * (c1 - b1) + (c2 - b2) * (c2 - b2);
    l3 = (a1 - c1) * (a1 - c1) + (a2 - c2) * (a2 - c2);

    // 거리 정렬
    l123[0] = l1;
    l123[1] = l2;
    l123[2] = l3;

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (l123[i] > l123[j]) {
                temp = l123[i];
                l123[i] = l123[j];
                l123[j] = temp;
            }
        }
    }

    // 삼각형 정점 설정
    x1 = a1; x2 = b1; x3 = c1;
    y1 = a2; y2 = b2; y3 = c2;

    // 신발끈 공식으로 면적 계산
    s = (x1 * y2 + x2 * y3 + x3 * y1) - (x1 * y3 + x3 * y2 + x2 * y1);

    // 조건에 따른 출력
    if (a1 == b1 && b1 == c1 || a2 == b2 && b2 == c2 || s == 0) {
        printf("X\n");
    } else if (l1 == l2 && l2 == l3) {
        printf("JungTriangle\n");
    } else if (l1 == l2 || l2 == l3 || l3 == l1) {
        if (l123[2] == l123[0] + l123[1]) {
            printf("Jikkak2Triangle\n");
        } else if (l123[2] > l123[0] + l123[1]) {
            printf("Dunkak2Triangle\n");
        } else {
            printf("Yeahkak2Triangle\n");
        }
    } else {
        if (l123[2] == l123[0] + l123[1]) {
            printf("JikkakTriangle\n");
        } else if (l123[2] > l123[0] + l123[1]) {
            printf("DunkakTriangle\n");
        } else {
            printf("YeahkakTriangle\n");
        }
    }

    return 0;
}
