#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a; 
		scanf("%d", &a);
		int i;
		for(i=2; i<=a; i++)
		{
			if(a%i==0) 
			{
			printf("%d ", i);
			a/=i;
			i--;	
			}	
		}
		printf("\n");
	}
	return 0;
}
