#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int gt(int n){
	int i;
	int giaithua=1;
	for(i=1;i<=n; i++ ){
		giaithua*=i;
	}
	return giaithua;
}
bool check(int n){
	int sum=0,k=n;
	int i;
	while(n>0){
		sum+=(gt(n%10));
		n/=10;
	}
	if(sum==k) return 1;
	else return 0;
}
int main(){
	int a,b; 
	scanf("%d %d", &a,&b);
	int i;
	if(b>a){
		for(i=a; i<=b; i++){
		if(check(i))
		printf("%d ",i);
	}
	}
	
	else {
			for(i=b; i<=a; i++){
		if(check(i))
		printf("%d ",i);
	}
	}
	
}
