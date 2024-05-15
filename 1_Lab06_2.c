#include <stdio.h>
#include<string.h>
int main(void)
{
    long long num, inp;
    long long min = 1000001;
    long long max = 0;

    scanf("%lld", &num);

    for (int i = 0; i < num; i++)
    {
        scanf("%lld", &inp);

        if (inp > max)max = inp;

        if (inp < min)min = inp;
    }
    printf("%lld", max * min);
    return 0;
}