#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int checknt(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int check2(char c[]){
	int n=strlen(c);
	int i;
	for(i=0;i<n;i++){
		if(checknt((c[i]-'0'))==0);
		return 0;
	}
	return 1;
}
int check1(char c[]){
	int n=strlen(c);
	int i;
	for(i=0; i<=(n-1)/2;i++){
		if(c[i]!=c[n-i-1] || (c[i]!='2' && c[i]!='3' && c[i]!='5'&&c[i]!='7') ) return 0;
	}
	return 1;
}
int main(){
	int t ;scanf("%d", &t);
	while(t--){
		char c[501];
		scanf("%s",&c);
		if(check1(c)) printf("YES\n");
		else printf("NO\n");
	}
}
