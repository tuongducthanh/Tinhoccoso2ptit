#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int count=1;
	while(n/10 !=0 )
	{
		count++;
		n/=10;
	}
	printf("%d", count);
	return 0;
}
