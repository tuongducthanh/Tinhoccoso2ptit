#include<stdio.h> 
 
	
int main(){ 
	long long fb[100];
	fb[0] = 0; fb[1] = 1; 
	int i;
	for(i=2; i<=100; i++){ 
		fb[i] = fb[i-1] + fb[i-2]; 
	} 
	int t; scanf("%d", &t); 
	while(t--){ 
	long long n; 
	scanf("%lld", &n); 
	int check=0; 
	for( i=0; i<=100; i++){ 
		if(fb[i]==n){ 
		check=1; 
		break; 
		} 
	} 
	if(check) printf("YES\n"); 
	else printf("NO\n");
	}
}
