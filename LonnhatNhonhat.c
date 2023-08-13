#include<stdio.h>

int main(){
	int n,max=0,min=99999999;
	while(scanf("%d", &n)!=-1){
		if(max<=n) max=n;
		if(min>=n) min=n;
	}
	printf("%d %d", max,min);
}
