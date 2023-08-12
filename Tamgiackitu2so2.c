#include<stdio.h>
int max(int a,int b){
	return a>b? a:b;
}
int main(){
	int n;scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		int unit =2*i-1;
		for(j=1;j<=2*i-1;j++){
			printf("%d", unit);
			unit+=1;
		}
		printf("\n");
	}
}
