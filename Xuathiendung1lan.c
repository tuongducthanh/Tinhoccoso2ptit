#include<stdio.h>
void nhapmang(int a[],int n){
	int i ;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}
int main(){
	int n;scanf("%d", &n);
	int a[n];int i,b[1000]={},count =0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(i=0;i<n;i++){
		if(b[a[i]]==1) {
		count ++;
		}
	}
	printf("%d\n", count);
	for(i=0;i<n;i++){
		if(b[a[i]]==1) {
		printf("%d ", a[i]);
		}
	}
}
