#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool check(int n){
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
		
	}
 return n>1;
}
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for(i=2; i<n; i++){
		if(check(i)==true ){
		printf("%d\n",i);
		}
	}
}
