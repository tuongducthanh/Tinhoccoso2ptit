#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int a[100];
int Fy(int n){
	if(n==1 || n==2) return 1;
	else return Fy(n-1)+Fy(n-2);
	}
	
int main(){
	int t;scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", Fy(n));
	}
}
