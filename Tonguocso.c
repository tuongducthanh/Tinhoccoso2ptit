#include<stdio.h>
#include<math.h>
int prime[2000001];
void pt(){
	int i,j;
	for(i=1;i<=2000000;i++){
		prime[i]=i;
	}
	for(i=2;i<=sqrt(2000000);i++){
		if(prime[i]==i){
				for(j=i*i;j<=2000000;j+=i){
					if(prime[j]==j){
						prime[j]=i;
					}
				}
		}
	
	}
}
int sum(int n){
	int tong=0;
	while(n!=1){
		tong +=prime[n];
		n/=prime[n];
	}
	return tong;
}
int main(){
	pt();
	int t;scanf("%d", &t);
	long long total=0;
	while(t--){
		int n;scanf("%d", &n);
		total+=sum(n);
	}
	printf("%lld",total);
	return 0;
}
