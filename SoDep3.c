#include<stdio.h>
#include<math.h>
int check(int n){
	int res=0,count=0,sum=0;
	int k=n;
	while(n!=0){
		if((n%10)==6) count=1;
		sum+= (n%10);
		res=res*10 + n%10;
		n/=10;
	}
	if(res==k && count==1 && (sum %10) ==8) return 1;
	else return 0;
}

int main(){
	int a,b,dem=0;scanf("%d %d", &a,&b);
	if(a<b){
		int i;
		for(i=a;i<=b;i++){
			if(check(i))
			printf("%d ", i);
		}
	}
	else{
		int i;
		for(i=b;i<=a;i++){
			if(check(i))
			printf("%d ", i);
		}
	}
	
}
