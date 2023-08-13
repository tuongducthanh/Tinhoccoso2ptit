#include<stdio.h>

int check(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main()
{
	int n;scanf("%d", &n);
	int i,a[n],count=0;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		if(check(a[i]))
		{
			count++;
		}
	}
	printf("%d ",count);
	for(i=0;i<n;i++){
		if(check(a[i]))
		{
			printf("%d ", a[i]);
		}
	}
}

