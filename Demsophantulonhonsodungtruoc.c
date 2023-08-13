#include<stdio.h>
void nhapmang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
		int count=1;
	int n;scanf("%d", &n);
		int a[n];
	nhapmang(a,n);
	int i,j;
	for(i=0;i<n-1;i++){
			if(a[i]<a[i+1]) count++;
		}
	printf("%d\n",count);	
	}	
}


