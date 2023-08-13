#include<stdio.h>

int main(){
	int n;scanf("%d", &n);
	int a[20];
	int i=0;
	if(n==0){
		printf("0");
	}
	while(n>0){
		a[i]=n%2;
		n/=2;
		i++;
	}
	int j;
	for(j=i-1;j>-1;j--){
		printf("%d", a[j]);
	}
}
