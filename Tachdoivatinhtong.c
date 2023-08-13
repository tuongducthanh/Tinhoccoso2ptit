#include<stdio.h> 
#include<string.h> 
int main() { 
	char s[200], st[200], sb[200]; scanf("%s", s); 
	while(strlen(s)!=1) { 
	strcpy(sb,"1"); 
	int n = strlen(s); 
	int s1, s2; s1 = n/2-1; s2 = n-1; 
	int i=0; 
	int bo, du=0; 
	if(n%2==1) bo=1; 
	else bo=0; 
	strcpy(st,""); 
		while(i<n/2) { 
		int d = (s[s1-i]-'0') + (s[s2-i]-'0') + du; 
		if(d>9) { 
			d%=10; du = 1;
		 } 
	 	else du = 0; 
	  		st[s1+bo-i]=(d+'0'); 
	 		i++; 
		} 
		 st[n/2+bo]='\0'; 
		if(n%2==1) st[0]=(((s[n/2]-'0')+du)+'0'); 
		else if(du==1) { 
		strcat(sb,st); strcpy(st,sb);
		 } 
			 strcpy(s,st);
	 		 printf("%s\n", s); 
	} 
} 
