#include <stdio.h>
#include<stdbool.h>
#include<math.h>
bool check(int n){
	int i;
	for(i=2; i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
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
            if(check(a[i])){
            b[a[i]]++;	
			}
            
        }
        int j,temp;
        for(i=0;i<n;i++){
        	for(j=i+1;j<n;j++){
        		if(a[i]>=a[j]){
        			temp=a[i];
					a[i]=a[j];
					a[j]=temp;	
				}
			}
		}
        printf("Test %d:\n", k);
        for ( i = 0; i < n; i++)
        {
            if (b[a[i]] > 0)
            {
                printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
                b[a[i]] = 0;
            }
        }
    }
}
