#include<stdio.h>
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b;
		scanf("%d %d", &a,&b);
		int k=1;
		int i;
		if(a==b) {
			printf("%d\n", a);	
		}
		else {
			printf("%d\n",gcd(a,b));
		}
	
		
	}
}

