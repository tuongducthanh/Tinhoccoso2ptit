#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n; scanf("%lld", &n);
		int le=0,chan=0;
		long long k=n;
		while(n>0){
			if((n%10)%2==0) chan++;
			else le++;
			n/=10;
		}
		if(k%2==0 && (chan> le))
		printf("YES");
		else printf("NO");
		printf("\n");
	}
}
