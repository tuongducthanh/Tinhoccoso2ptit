#include<stdio.h>


int main(){
	int n,m;
	scanf("%d %d", &n,&m);
	int i,j;
	if(n>=m){
		for(i=n; i>0;i--){
		int init=i;
		for(j=1;j<=m; j++){
			if(j<i){
				printf("%d", init--);
			}
			else{
				printf("%d",init++);
			}
		}
		printf("\n");
	}
	}
	else{
		for(i=m; i>0;i--){
		int init=m-i+1;
		for(j=1;j<=n; j++){
			if(j<i){
				printf("%d", init--);
			}
			else{
				printf("%d",init++);
			}
		}
		printf("\n");
	}
	}
}
