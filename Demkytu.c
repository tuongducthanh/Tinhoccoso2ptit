#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>


int main(){
	char a[1000];
	gets(a);
	int alpha=0,digit=0,symbol=0;
	int i;
	for(i=0;i<strlen(a);i++){
		if(isalpha(a[i])) alpha++;
		else if(isdigit(a[i])) digit++;
		else symbol++;
	}
	printf("%d %d %d", alpha, digit, symbol);
}
