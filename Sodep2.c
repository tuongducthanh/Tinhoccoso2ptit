#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int sum(char c[501]){
	int sum=0;
	int i,res=0;
	for(i=0;i<strlen(c);i++){
		res=res*10 +(c[i]-'0');
	}
	for(i=0;i<strlen(c);i++){
		sum+=(c[i]-'0');
	}
	if(sum%10==0) return 1;
	else return 0;
}

int checktn(char c[501]){
	int n=strlen(c);
	int i;
	if(c[0]!='8'|| c[n-1]!='8') {
		return 0;
	}
	for(i=0;i<=((n-1)/2);i++){
		if(c[i]!=c[n-1-i]){
		return 0;	
		}	
	}
	return 1;	
}
int main(){
	int t;scanf("%d", &t );
	while(t--){
		char c[501];
		getchar();
		scanf("%s", &c);
		if(checktn(c) && sum(c)) printf("YES\n");
		else printf("NO\n");
	}
}

