#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  int b[100] = {0,};

  for(int i=0; i<a; i++) {
    scanf("%d", &b[i]);
  }

  int c, sum = 0;
  scanf("%d", &c);
  for(int i=0; i<a; i++) {
    if(b[i] == c)
      sum += 1;
  }

  printf("%d\n", sum);
}