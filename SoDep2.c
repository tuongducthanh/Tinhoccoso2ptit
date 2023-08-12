#include<stdio.h>
#include<math.h>
int check(int n){
	int res=0;
	int k=n;
	while(n>0){
		res=res*10 + n%10;
		n/=10;
	}
	if(res==k) return 1;
	else return 0;
}
int checksum(int n){
	int sum=0;
	while(n>0){
		sum +=(n%10);
		n/=10;
	}
	if(sum%10==0) return 1;
	else return 0;
}
int main(){
	int t; scanf("%d",&t);
	while(t--){
		int count =0;
		int n;scanf("%d",&n);
		int i,first=pow(10,n-1),last=pow(10,n)-1;
		for(i=first;i<=last;i++){
			if(check(i)&& checksum(i)) count++;
		}
		printf("%d\n",count);
	}
}
