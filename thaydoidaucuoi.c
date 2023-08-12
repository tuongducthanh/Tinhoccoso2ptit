#include<stdio.h>
#include<math.h>

int main(){
	int n,k,t,inv;
	int x=10,p=0;
	scanf("%d", &n);
	int count=log10(n);
	k=n/pow(10,count);
	t=n%10;
	n/=10;
	while(n/10 !=0 ){
		p+= (n%10)*x;
		x*=10;
		n/=10;
	}
	inv=t*pow(10,count)+p+k;
	printf("%d",inv);
}
