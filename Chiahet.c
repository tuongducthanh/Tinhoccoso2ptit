#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool check(int n, int k){
	int i;
	int count=0;
	for(i=2;(n/i)>=1;i*=2){
		count=count+(n/i);
	}
	if(count>=k) return 1;
	else return 0;
}
int main(){
	int n,k;
	scanf("%d %d", &n,&k);
	if(n>=1 && n<=100 && k>=1 &&k<=100){
	if(check(n,k)) printf("Yes");
	else printf("No");	
	}
		
	
}
