#include<stdio.h>
int max(int a,int b){
	return a>b? a:b;
}
int main(){
	int n;scanf("%d",&n);
	int i,j;
	for(i=n;i>0;i--){
		
		int unit=i;
		for(j=1;j<=i;j++){
			printf("%c", 63+unit);
			unit+=1;
		}
		printf("\n");
	}
}
