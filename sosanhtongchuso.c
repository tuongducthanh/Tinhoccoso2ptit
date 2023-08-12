#include<stdio.h>
#include<math.h>
#include<stdbool.h>

long long sum(int n){
	long long count=0;
	while(n>0){
		count+=(n%10);
		n/=10;
	}
	return count;
}
int main(){
	int a,b; scanf("%d %d", &a,&b);
	if(sum(a)<= sum(b)) printf("%d %d", a,b);
	else printf("%d %d", b,a);
}
