#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void nhapmang(int a[],int n){
	int i;
	for(i=0; i<n;i++){
		scanf("%d", &a[i]);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int a[n];
		nhapmang(a,n);
		int i;
		for(i=0; i<n; i++){
			if(a[i]%2==0){
				printf("%d ",a[i]);
			}
			
		}
		printf("\n");
	}
}
