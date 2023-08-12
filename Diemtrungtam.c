#include <stdio.h> 
#include <math.h> 
int main(){ 
		long long int n,i,a,b,tt,dem=2,c,d,x,y,m=0; 
		scanf("%lld",&n);
		scanf("%lld %lld",&a,&b); 
		scanf("%lld %lld",&c,&d);
		if (c==a || d==a) tt=a;
		 	else if (c==b || d==b) tt=b;
		if (a==b || c==d) m=1; 
		 	for (i=3;i<n;i++){ 
				scanf("%lld %lld",&x,&y); 
				if (x==tt || y==tt) dem++; 
				if (x==y) m=1; 
		} 
		if (dem==n-1 && m==0) 
		printf("Yes"); 
		else printf("No");
	 }
