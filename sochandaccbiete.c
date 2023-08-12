#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool check(long long n){
	int i;
	int count=0;
	while(n!=0){
		if((n%10)%2 !=0) count++;
		n/=10;
	}
	if(count== 0) return 1;
	else return 0;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}
