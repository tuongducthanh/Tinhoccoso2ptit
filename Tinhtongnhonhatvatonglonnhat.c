#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

long long min(char a[]){
	long long res=0;
	int i;
	for(i=0;i<strlen(a);i++){
		if(a[i]=='6') res=res*10 +5;
		else res=res*10 +(a[i]-'0');
	}
	return res;
}
long long max(char a[]){
	long long res=0;
	int i;
	for(i=0;i<strlen(a);i++){
		if(a[i]=='5') res=res*10 +6;
		else res=res*10 +(a[i]-'0');
	}
	return res;
}
int main(){
	int t;scanf("%d", &t);
	while(t--){
		char a[19],b[19];
		scanf("%s %s",a,b);
		printf("%lld %lld",min(a)+min(b),max(a)+max(b));
		printf("\n");
	}
}
