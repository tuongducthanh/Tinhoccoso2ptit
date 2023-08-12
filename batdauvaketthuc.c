#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(n<10) {
			printf("NO\n");	
		}
		int count=(int)log10(n)+1;
		int last=n%10;
		int first=n/(pow(10,count-1));
		if(last== first) 
		{
		 printf("YES\n");
			
		}
		else{
			printf("NO\n");
		} 
	}
}
