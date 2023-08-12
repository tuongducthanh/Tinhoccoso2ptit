#include<stdio.h>
#include<math.h>

int giaithua(int n){
	int i,gt=1;
	for(i=1;i<=n;i++){
		gt*=i;
	}
	return gt;
}
int main(){
	int n,sum=0;
	scanf("%d",&n);
	int k=n;
	while(n !=0){
		sum+=giaithua(n%10);
		n/=10;
	}
	if (sum==k) printf("1");
	else printf("0");
}
