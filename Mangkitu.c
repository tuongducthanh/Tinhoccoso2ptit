#include<stdio.h>

int main(){
	char s[1001];
	scanf("%s", s);
	int res1=0,res2=0,res3=0;
	int i;
	for(i=0;i<strlen(s);i++){
		if(s[i]=='(') res1+=1;
		else if(s[i]==')') res1-=1;
		else if(s[i]=='[') res3+=1;
		else if(s[i]==']') res3-=1;
		else if(s[i]=='{') res2+=1;
		else if(s[i]=='}') res2-=1;
	}
	if(res1== 0 && res2 ==0 && res3 ==0) printf("1");
	else printf("0");
}
