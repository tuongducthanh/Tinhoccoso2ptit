#include<stdio.h>
#include<math.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		printf("%d=", n);		
		int i,j,sl=0;
		for(i=2; i<=n;i++){
			if(n%i==0) sl++;
			int count =0;
			while(n%i==0){
				count ++;
				n/=i;
			}
			
			if(count!=0){
				printf("%d^%d",i,count);
				if(n!=1) printf("*");
			}
			
		}
		if(n!=1) printf("%d^1",n);
		printf("\n");
	}
}
