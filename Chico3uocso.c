#include <stdio.h> 
#include <math.h> 
int PrimeCheck(int n){ 
		int i;
		for( i = 2; i <= sqrt(n); i++){
		 if(n % i == 0) return 0; 
		 } 
		 return n > 1; } 
int main() { 
	int t; scanf("%d", &t); 
	while(t--){ 
	long long a, b; scanf("%lld %lld", &a, &b); 
	int count = 0; 
	long long i;
		for ( i = a; i * i <= b; i++) { 
		if(PrimeCheck(i)) { 
		count++;
		 } 
		} printf("%d\n", count);
		 } return 0; }
