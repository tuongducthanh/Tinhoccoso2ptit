#include<stdio.h>

void nhapmang(int a[1000],int n)
{
	int i;
	for(i=0;i<n;i++){
		scanf("%d ", &a[i]);
	}
}

int main(){
	int m,n;scanf("%d %d", &m,&n);
	int a[1000],b[1000];
	nhapmang(a,m);
	nhapmang(b,n);
	int insert;scanf("%d", &insert);
	int i,j=insert;
	for(i=insert+n;i<n+m; i++){
		a[i]=a[j];
		j++;
	}
	int k=0;
	for(i=insert; i<n+insert; i++){
		a[i]=b[k];
		k++;
	}
	for(i=0; i<m+n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
