#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int check(char c[]){
	int l=0,r=strlen(c)-1;
	while(l<r){
		if(c[l]!=c[r]) return 0;
		l++; r--;
	}
	return 1;
}
int main(){
	char c[100001];
	gets(c);
	if(check(c)){
		printf("%d", strlen(c)-1);
	}
	
}
