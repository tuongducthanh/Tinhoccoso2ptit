#include<stdio.h>

void nhapmang(int a[], int n){
	int i;
	for(i=0;i<n; i++){
		scanf("%d ", &a[i]);
	}
}
void xuatmang(int a[], int n){
	int i;
	for(i=0; i<n;i++)
	{
		printf("%d ", a[i]);
	}
	}
int main(){
		int n;scanf("%d", &n);
		int a[n];
		nhapmang(a,n);
		int i,b[n];
		for(i=0; i<n;i++){
			b[n-i-1]=a[i];
		}
		xuatmang(b,n);
}
