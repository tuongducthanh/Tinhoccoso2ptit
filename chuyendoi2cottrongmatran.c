#include<stdio.h>
int main(){
	int n,m;scanf("%d %d", &n,&m);
	int i,j;
	
	int a[n+1][m+1];
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int x,y;scanf("%d%d",&x,&y);
	for(i=1;i<=n;i++){
		int temp=a[i][x];
		a[i][x]=a[i][y];
		a[i][y]=temp;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
