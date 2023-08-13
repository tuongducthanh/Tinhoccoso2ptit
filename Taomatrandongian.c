#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int i,j;
	for(i=0;i<n;i++){
		int count =1;
		for(j=0;j<n;j++){
		if(j<=i) printf("0 ");
		else{
			printf("%d ", count);
			count ++;
		}
	}
	printf("\n");
	}
}
