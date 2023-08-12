#include<stdio.h>
#include<math.h>

int main(){
	int t;scanf("%d", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		long long max,i;
		for(i=2;i*i <=n;i++){
			if(n%i==0){
				max=i;
				while(n%i==0){
					n/=i;
				}
			}
		}
		if(n>1) max=n;
		printf("%lld\n", max);
	}
}
