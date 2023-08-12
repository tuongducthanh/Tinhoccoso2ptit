#include<stdio.h>
int  UCLN(int  a, int b){
	if(b==0) return a;
	else return UCLN(b,a%b);
}
long long BCNN(int  a, int b){
	return (long long)a*b/UCLN(a,b);
}
int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d\n%lld", UCLN(a,b), BCNN(a,b));
}
