#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		int k=sqrt(n);
		if(k*k==n) printf("YES\n");
		else printf("NO\n");
		
	}
	return 0;
}
