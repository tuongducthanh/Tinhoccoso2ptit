#include<stdio.h> 
int main() { 
			int N; int T; scanf("%d", &T);
			 while (T--) { 
			 scanf("%d",&N); 
			 int h = 1; 
			 int count = 0; 
			 while (h <= N / h) {
			  if(N % h==0){ 
			  if (h % 2 == 0) 
			  count++; 
			if (N / h % 2 == 0) 
			count++; 
			if (N / h == h && h % 2 == 0) 
			count--; } h++; 
			} 
			printf ("%d\n", count); 
			} 
			return 0; 
			}
