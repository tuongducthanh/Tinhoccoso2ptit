#include<stdio.h>
#include<math.h>

int giaithua(int n){
	int i,gt;
	for(i=1;i<=n;i++){
		gt*=i;
	}
	return gt;
}
int main(){
	int n,sum;
	scanf("%d",&n);
	int first=n/(pow(10,log10(n)));
	while(n/10 != 0){
		sum+=giaithua(n%10);
		n/=10;
	}
	sum+=giaithua(first);
	if(sum==n) printf("1");
	else printf("0");
	return 0;
}
