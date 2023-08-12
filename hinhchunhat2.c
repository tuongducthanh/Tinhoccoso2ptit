#include <stdio.h> 
int main() { 
	int a,b; 
	scanf("%d %d", &a , &b); 
	int i,j;
	for(i = 1; i <= a; i++) { 
	int k=0; 
	for( j=1; j <= b; j++) { 
		if(j >= i) { 
		printf("%d",j); k++; 
		} 
		if(i > b) { 
		printf("%d",i); k++; j+=b;
		} 
		} 
		if( k<b ) {
		for( j=k;j>(k-1);j--) {
		 printf("%d",j); 
			  } 
			  } 
			  printf("\n"); 
			  } 
			  }
