#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main(){
	long long N,a,b,c,d,dem=2,m=0,x,y,tt;
	scanf("%lld",&N);
	scanf("%d %d", &a,&b);
	scanf("%lld %lld",&c , &d);
	if(c==a || d==a) tt=a;
	else if (d==b || c==b) tt=b;
	if(a==b|| c==d){
		m=1;
	}
	if(c==d ||a ==b) m=1;
	int i;
	for(i=3; i<N;i++){
		scanf("%lld %lld", &x,&y);
		if(x==tt|| y==tt) dem++;
		if(x==y) m=1;
	}
	if(dem==(N-1)&&m==0) printf("Yes");
	else printf("No");
}
