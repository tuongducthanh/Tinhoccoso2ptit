#include<stdio.h>
void nhapmang(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}
int main(){
		int i,j;
		int n;scanf("%d", &n);
		int a[n];
		nhapmang(a,n);
		int insert;scanf("%d",&insert);
		for(i=insert;i<n;i++){
			printf("%d ",a[i]);
		}
		for(i=0;i<insert;i++){
			printf("%d ",a[i]);
		}
}
