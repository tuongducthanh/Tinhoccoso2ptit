#include<stdio.h>

int main(){
	int t;scanf("%d", &t);
	while(t--){
		int n,m,r;
		scanf("%d %d %d", &n,&m,&r);
		int a[n][m];
		int i,j;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d", &a[i][j]);
			}
		}
		int temp;
		for(i=0;i<n; i++){
			for(j=i+1;j<n;j++){
				if(a[i][r-1]>a[j][r-1]){
					temp=a[i][r-1];
					a[i][r-1]=a[j][r-1];
					a[j][r-1]=temp;
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
