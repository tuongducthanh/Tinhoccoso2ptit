#include<stdio.h>
#include<math.h>

int main(){
	int n,decard=1;
	scanf("%d",&n);
	while(n!=0){
		decard*=(n%10);
		n/=10;
	}
	printf("%d", decard);
}
