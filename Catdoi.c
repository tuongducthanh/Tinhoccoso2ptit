#include <stdio.h> 
#include <math.h> 
long long check(long long n){
		 long long a=0,c=0;
		  while(n>0){ 
		     int b=n%10; 
		     if(b==8 || b==9 || b==0 || b==1){ 
		       if(b==1){ 
		         a=a+ pow(10,c);
		       }
		   c++; 
		   
		    } 
		     else return 0; 
		      n/=10; 
 } 
		   return a; 
 }
main (){ 
	int n; scanf("%d",&n); 
	while(n--){ 
	long long a; 
	scanf("%lld",&a); 
	if(check(a)==0){ 
	printf("INVALID\n"); 
	} 
	else { 
	printf("%lld\n",check(a)); 
} 	
} 
}
