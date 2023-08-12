#include<stdio.h>

int main(){
	int n,m;
	scanf("%d %d", &n,&m);
	int i,j;
	for(i=1; i<=n; i++){
		for(j=1; j<=(m+i-1); j++){
			if(j<i) printf("~");
			else if((i==1 && j>(i-1))||(i==n && j>(i-1))||(j==i)||(j==m+i-1))		
			printf("*");
			else 
			printf(".");
		}
		printf("\n");
	}
}
