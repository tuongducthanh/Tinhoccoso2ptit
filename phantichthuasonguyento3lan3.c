#include<stdio.h>

int main(){
	int t; scanf("%d", &t);
	int k;
	for(k=1;k<=t;k++){
		int n;scanf("%d", &n);
		int i,j;
		printf("Test %d: ",k);
		for(i=2; i<=n;i++){
			int count =0;
			while(n%i==0){
				count++;
				n/=i;
				
			}
			if (count !=0) printf("%d(%d) ",i,count);
		}
		printf("\n");
		
	}
}
