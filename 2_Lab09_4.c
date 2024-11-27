#include <stdio.h>
#include <string.h>

int main(void) {
    int a, b;
    char c[3]; 
    char* ans = "true";
    int i = 0;

    while (1) { 
        scanf("%d %s %d", &a, c, &b);

        if (strcmp(c, "E") == 0) 
            break;
        i++;
        if (strcmp(c, ">") == 0) {
            ans = (a > b) ? "true" : "false";
        }
        else if (strcmp(c, ">=") == 0) {
            ans = (a >= b) ? "true" : "false";
        }
        else if (strcmp(c, "<") == 0) {
            ans = (a < b) ? "true" : "false";
        }
        else if (strcmp(c, "<=") == 0) {
            ans = (a <= b) ? "true" : "false";
        }
        else if (strcmp(c, "==") == 0) {
            ans = (a == b) ? "true" : "false";
        }
        else if (strcmp(c, "!=") == 0) {
            ans = (a != b) ? "true" : "false";
        }
        
        printf("Case %d: %s\n", i, ans);
    }

    return 0;
}
