#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void nhapmang(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%d ", &a[i]);
		
	}
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		nhapmang(a,n);
		int max=a[0];
		int i;
		for(i=1; i<n;i++){
			if(max<=a[i]) max=a[i];
		}
		printf("%d\n", max);
		for(i=0; i<n;i++){
			if(a[i]==max) printf("%d ",i);
		}
		printf("\n");
	}
}
