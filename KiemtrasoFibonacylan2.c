#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, a = 0, b = 1, temp;
        scanf("%lld", &n);
        while (a < n)
        {
        	temp=a+b;
            b=a;
            a=temp;
        }
        if (n == a)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
