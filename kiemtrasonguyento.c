#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool check(int n){
	int i;
	for(i=2;i<sqrt(n); i++){
		if(n%i==0) return 0;
		
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d",&n);
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
}
