#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int sum(int n)
{
	int tong=0;
	while(n>0){
		tong+=(n%10);
		n/=10;
		}

	return  tong;
}
	

int main(){
	int n;scanf("%d",&n);
	int i;
	int tong=0,k=n;
	for(i=2; i<=n;i++){
		if(n%i==0){
			while(n%i==0){
				tong+=i;
				n/=i;
			}
		}
	}
	if(sum(k)==tong) printf("YES");
	else printf("NO");
}
