#include<stdio.h> 
int main(){ 
	int T; scanf("%d", &T);
	while(T--){ 
		int N, p; scanf("%d %d", &N, &p); 
		int x = 0; 
		int i;
		for( i = p; i <= N; i *= p) 
		x += N / i; 
		printf("%d\n", x);
	 } 
 }
