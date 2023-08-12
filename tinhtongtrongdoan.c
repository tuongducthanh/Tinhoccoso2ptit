#include<stdio.h>

int main(){
	int a,b;
	int i,sum=0;
	scanf("%d %d", &a,&b);

	 if(a>b){
		for(i=b; i<=a;i++){
			sum+=i;
		}
	}
	else
	{
		for(i=a; i<=b;i++){
			sum+=i;
		}
	}
	printf("%d",sum);
}
