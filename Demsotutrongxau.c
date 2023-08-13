#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t;scanf("%d", &t);
	while(t--){
		char c[200];
		scanf("\n");
		gets(c);
		int n=strlen(c);
		int i,digit=1;
		for(i=1;i<n;i++){
			if(c[i]!=' '&& c[i+1]==' ') digit++;
		}
		printf("%d\n",digit);
	}
}
