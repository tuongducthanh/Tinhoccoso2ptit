#include<stdio.h>
void nhapmang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}
int main(){
	int n;scanf("%d", &n);
	int a[n];
	nhapmang(a,n);
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("%.3f",(float)sum/n);
}
