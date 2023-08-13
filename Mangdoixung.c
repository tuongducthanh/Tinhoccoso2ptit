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
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		int a[n];
		int b[n];
			int i;
		nhapmang(a,n);
		for(i=0;i<n; i++){
			b[n-i-1]=a[i];
		}
		int count =0;
		for(i=0; i<n; i++){
			if(b[i]!=a[i]) count++;
		}
		
		if(count ==0) printf("YES\n");
		else printf("NO\n");
		}
}
