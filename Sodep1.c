#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int checksodep(char c[501]){
	int n=strlen(c);
	int i;
	for(i=0;i<=((n-1)/2);i++){
		if(c[i]!=c[n-1-i] || (c[i]-'0')%2==1){
		return 0;
		break;	
		}
		
	}
	return 1;
	
}
int main(){
	int t; scanf("%d", &t);
	while(t--){
		char c[501];
		getchar();
		scanf("%s", &c);
		if(checksodep(c)) printf("YES\n");
		else printf("NO\n");
	}
}
