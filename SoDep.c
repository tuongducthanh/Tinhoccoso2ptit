#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checktn(long long n){
	long long x=0,tn, k=n;
	while(n>0){
		tn=x*10 + n%10;
		x=tn;
		n/=10;
	}
	if(tn==k) return 1;
	else return 0;
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
		long long n; scanf("%lld", &n);
		int heso= (int)log10(n)+1;
		long long mu=pow(10,heso-1);
		
		int first=n/mu,last=n%10;
		n=n%mu;	n=n/10;
		if((first==(2*last) ||(last==(2*first)))&& checktn(n)==1) printf("YES\n");
		else printf("NO\n");
	}
}
