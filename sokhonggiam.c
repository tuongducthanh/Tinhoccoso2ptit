#include<stdio.h>
#include<stdbool.h>
bool check(long long n){
	while(n>0){
		int a=n%10;
		int b=(n/10)%10;
		if(a<b) return 0;
		n/=10;
		
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(check(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
}
