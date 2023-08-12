#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int k=n/(pow(10,log10(n)));
	int p=n%10;
	printf("%d %d",k,p);
}
