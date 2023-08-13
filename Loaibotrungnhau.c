#include<stdio.h>


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n];
		int i;
			for(i=1;i<=n;i++){
		    scanf("%d",&a[i]);
	}
		int j,count =0;
		for(i=1;i<=n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]){
					count++;
				}
			}
			if(count ==(n-i) || i==n) printf("%d ",a[i]);
		}
		printf("\n");
	}
}
