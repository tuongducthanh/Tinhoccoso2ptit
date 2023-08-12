#include<stdio.h>
#include<math.h>
int  UCLN(long long  a, long long b){
	if(b==0) return a;
	else return UCLN(b,a%b);
}
long long BCNN(long long  a, long long b){
	return a*b/UCLN(a,b);
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
		int n;scanf("%d",&n);
		long long i;
		long long temp=1;
		for(i=1;i<=n;i++){
			temp=BCNN(temp,i);
		}
		printf("%lld\n", temp);
	}
}

