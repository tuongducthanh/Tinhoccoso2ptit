#include<stdio.h>
#include<string.h>
int check(char c[]){
	int i;
	for(i=0;i<strlen(c);i++){
		if(c[i]!='0' && c[i]!='1' && c[i]!='2') return 1;
	}
	return 0;
}

int main(){
	int t;scanf("%d", &t);
	while(t--){
		char c[19];
		getchar();
		gets(c);
		if(check(c)) printf("NO\n");
		else printf("YES\n");
	}
}
