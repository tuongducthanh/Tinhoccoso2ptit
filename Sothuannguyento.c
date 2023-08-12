#include<stdio.h>
#include<math.h>
int prime(int n){
	int i;
	for(i=2;i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int check(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	if(prime(sum)) return 1;
	return 0;
}
int checkever(int n){
	while(n){
		int temp=n%10;
		if(temp !=2 && temp !=3 && temp!=5 && temp!=7) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
	int a,b;scanf("%d%d", &a,&b);
	int i,dem=0;
	for( i=a;i<=b;i++){
		if(prime(i)&&check(i)&& checkever(i)) dem++;
	}
	printf("%d\n", dem);
	}
	return 0;	
}

