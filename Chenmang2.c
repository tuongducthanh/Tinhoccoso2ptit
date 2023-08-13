#include<stdio.h>

void nhapmang(int a[1000],int n)
{
	int i;
	for(i=0;i<n;i++){
		scanf("%d ", &a[i]);
	}
}

int main(){
	int t;scanf("%d", &t);
	int i;
	for(i=1; i<=t; i++){
	int n,m,p,j; scanf("%d %d %d", &n,&m,&p);	
	int a[1000],b[1000];
	for (  j= 0; j < n; j++)
            scanf("%d", &a[j]);
    for ( j = 0; j <m; j++)
            scanf("%d", &b[j]);
	printf("Test %d:\n", i);
	for(j=0; j<p;j++){
		printf("%d ", a[j]);
	}
	for(j=0;j<m; j++){
		printf("%d ",b[j]);
	}
	for(j=p; j<n;j++){
		printf("%d ", a[j]);
	}
	printf("\n");
	}
	

}
