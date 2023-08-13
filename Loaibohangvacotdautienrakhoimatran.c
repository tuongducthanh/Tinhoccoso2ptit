#include<stdio.h>

int main(){
	int t;scanf("%d", &t);int k;
	for(k=1;k<=t;k++){
	int n,m; scanf("%d %d", &n,&m);
	int a[n][m];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Test %d:\n",k);
	for(i=1;i<n;i++){
		for(j=1;j<m;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}	
	}
	
}
