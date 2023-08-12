#include<stdio.h>
#include<math.h>

void pt(int n){
	int i;
	for(i=2; i<=sqrt(n) ;i++){
		if(n%i==0){
			int count=0;
			while(n%i==0){
				count ++;
				n/=i;
			}
			printf("%d^%d", i,count);
			if(n!=1) printf("*");
		}
	}
	if(n!=1) printf("%d^1", n);
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		
		int n; scanf("%d", &n);
		printf("%d = " , n);
		pt(n);
		printf("\n");
}
}
