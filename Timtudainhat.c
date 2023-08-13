#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

int main(){
	char a[100];
	char maxword[100][100];
	int l=0,i;
	int maxlength=0;
	while(scanf("%s", &a)!=-1){
		if(strlen(a)>maxlength){
			maxlength=strlen(a);
			strcpy(maxword[l],a);
			l++;
		}
	}
	for(i=0; i<l;i++){
		if(strlen(maxword[i])== maxlength){
			printf("%s - %d", maxword[i],maxlength);
		}
	}
	
}
