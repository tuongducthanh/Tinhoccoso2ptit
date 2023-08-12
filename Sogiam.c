#include<stdio.h>
#include<stdbool.h>

bool check(int n){
	int x= 0;
	while(n>0){
		int i=n%10;
		if(i<x){
			return 0;
		}
		x=i;
		n/=10;
	}
	return 1;
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
	int a,b; int count=0;
	scanf("%d %d", &a,&b);
	if(a>1 && b>a){
			int i;
	for(i=a; i<=b;i++){
		if(check(i)) count++;
	}
	printf("%d\n", count);
	}
	
	}
	
}
