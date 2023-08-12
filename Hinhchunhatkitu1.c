#include<stdio.h>
int max(int a,int b){
	return a>b? a:b;
}
int main(){
	int n,m;scanf("%d %d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++){
		int unit = max(n,m);
		for(j=1;j<=m;j++){
			if(j<i) printf("%c", 96+unit--);
			else printf("%c",96+unit);
		}
		printf("\n");
	}
}
