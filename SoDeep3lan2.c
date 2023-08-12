#include<stdio.h>
#include<math.h>

int check(int n){
	int res=0,count=0,sum=0,k=n;
	while(n){
		int t=n%10;
		res=res*10 +t;
		if(t==6 ) count=1;
		sum+=t;
		n/=10;
	}
	if(sum%10 ==8 && count && res==k) return 1;
	return 0;
}
int main(){
	int a,b;scanf("%d %d", &a,&b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
		int i;
		for(i=a;i<=b;i++){
			if(check(i)) printf("%d ",i);
		}
	}
}
