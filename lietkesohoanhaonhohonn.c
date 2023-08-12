#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checkhh(int n){
	int i,sum=1;
	for(i=2; i<=sqrt(n);i++){
		if(n%i==0){
			sum=sum+i+n/i;
		}
	}
	if(sum==n) return 1;
	else return 0;
}
int main(){
	int n; scanf("%d", &n);
	int i;
	for(i=2; i<n;i++){
		if(checkhh(i))
		printf("%d ",i);
	}
}
