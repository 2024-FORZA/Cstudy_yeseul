#include <stdio.h>
//2684
int main(void) {
    int p;
    scanf("%d", &p);
    char arr[41] = { 0 };
    while (p != 0) {
        int count[8] = { 0, };
        scanf("%s", arr);
        for (int i = 0; i < 38; i++) {
            // (TTT, TTH, THT, THH, HTT, HTH, HHT, HHH)
            if (arr[i] == 'T' && arr[i + 1] == 'T' && arr[i + 2] == 'T')
                count[0]++;
            else if (arr[i] == 'T' && arr[i + 1] == 'T' && arr[i + 2] == 'H')
                count[1]++;
            else if (arr[i] == 'T' && arr[i + 1] == 'H' && arr[i + 2] == 'T')
                count[2]++;
            else if (arr[i] == 'T' && arr[i + 1] == 'H' && arr[i + 2] == 'H')
                count[3]++;
            else if (arr[i] == 'H' && arr[i + 1] == 'T' && arr[i + 2] == 'T')
                count[4]++;
            else if (arr[i] == 'H' && arr[i + 1] == 'T' && arr[i + 2] == 'H')
                count[5]++;
            else if (arr[i] == 'H' && arr[i + 1] == 'H' && arr[i + 2] == 'T')
                count[6]++;
            else if (arr[i] == 'H' && arr[i + 1] == 'H' && arr[i + 2] == 'H')
                count[7]++;
        }
        p--;

        
        for (int i = 0; i < 8; i++) 
            printf("%d ", count[i]);
       
    }

    
    return 0;
}
