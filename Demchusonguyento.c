#include <stdio.h>
int main()
{//1152345
    long long n;
    int a[20] = {}, p = 0;
    scanf("%lld", &n);
    while (n != 0)
    {
        a[p++] = n % 10;
        n /= 10;
    }
    int i,j;
    for ( i = p - 1; i >= 0; i--)
    {
        if (a[i] == 2 || a[i] == 3 || a[i] == 5 || a[i] == 7)
        {
            int s = 1;
            for ( j = i - 1; j >= 0; j--)
            {
                if (a[j] == a[i])
                {
                    a[j] = 0;
                    s++;
                }
            }
            printf("%d %d\n", a[i], s);
        }
    }
}
