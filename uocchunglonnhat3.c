#include<stdio.h>

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
			if(a>b){
				for(i=1; i<=b;i++){
					if( a%i==0 && b%i==0)
					{
						if(i>=k) k=i;
					}
				}
			
			}
			
			else {
				for(i=1; i<=a;i++){
					if( a%i==0 && b%i==0)
					{
						if(i>=k) k=i;
					}
				}
			}
			printf("%d\n", k);
		}
	
		
	}
}
