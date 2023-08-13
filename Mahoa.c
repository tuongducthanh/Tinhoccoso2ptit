#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		char c[101];
		scanf("%s",c);
		int i;
		for(i=0;i<strlen(c);i++){
			int j=i+1;
				while(j<strlen(c)&& c[j]==c[i]){
					j++;
				}
				printf("%c%d",c[i],j-i);
				i=j-1;
		}
		printf("\n");
	}
	return 0;
}
