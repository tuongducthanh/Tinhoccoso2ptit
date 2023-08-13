#include<stdio.h>

void swap(int a[], int a,int b){
	int temp,i;
	temp=a;
	a=b;
	b=temp;
}
void nhapmang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
}
int main(){
	int n;scanf("%d", &n);
	if(n>2 &&n<100){
	int a[n];
	nhapmang(a,n);
	int i,j,temp;
	for(i=0; i<n; i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				swap(a[],a[i],a[j]);
			}
		}
	}
	for(i=1;i<n;i++){
		if(a[0]!=a[i]){
			printf("%d %d",a[0],a[i]);
			break;
		}
	}
		
	}
	
}
