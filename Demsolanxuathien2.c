#include <stdio.h>
int main()
{
    int t;int k;
    scanf("%d", &t);
    for ( k = 1; k <= t; k++)
    {
        int n;int i;
        scanf("%d", &n);
        int a[n], b[100005] = {};
        for ( i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[a[i]]++;
        }
        printf("Test %d:\n", k);
        for ( i = 0; i < n; i++)
        {
            if (b[a[i]] != 0)
            {
                printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
                b[a[i]] = 0;
            }
        }
    }
}
