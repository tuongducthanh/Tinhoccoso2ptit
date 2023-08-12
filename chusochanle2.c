#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	int n,chan=0,le=0;
	scanf("%d",&n);
	while(n!=0){
		if((n%10)%2==0) chan++;
		if((n%10)%2!=0) le++;
		n/=10;
	}
	printf("%d %d\n",le,chan);	
	}
	
}
