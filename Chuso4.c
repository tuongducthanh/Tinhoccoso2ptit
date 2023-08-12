#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool checktn(int n)
{
	int i=0,k=n,tn;
	while(n>0){
		tn=i*10 +n%10;
		i=tn;
		n/=10;
	}
	if(tn==k) return 1;
	else return 0;
}
bool checksum(int n){
	int sum=0;
	while(n>0){
		sum+=(n%10);
		n/=10;
	}
	if(sum%10==0) return 1;
	else return 0;
}
bool check4(int n){
	int count=0;
	while(n>0){
		if((n%10)==4) {
			return 0;
			break;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int i;
		int a=pow(10,n-1),b=pow(10,n);
		for(i=a; i<b; i++){
			if(checktn(i)&&checksum(i)&& check4(i)){
				printf("%d ", i);			}
		}
		printf("\n");
	}
}
