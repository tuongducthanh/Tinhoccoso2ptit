#include<stdio.h>
#include<stdbool.h>

int check(int n){
	while(n>0){
		int i=n%10;
		n/=10;
		int j=n%10;
		if(j>i) {
		return 0;
		break;
	}	
	}
	return 1;
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n;scanf("%d", &n);
		int i;
		int a=pow(10,n-1);
		int b=pow(10,n);
		for(i=a;i<b;i++){
			if(check(i)) {
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}
