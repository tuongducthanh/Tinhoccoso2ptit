#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
 int main(){
 	char c[101];
 	gets(c);
 	char a[101][101]; int n=0;
 	char*token=strtok(c," ");
 	while(token != NULL){
 		strcpy(a[n],token);
 		token=strtok(NULL," ");
 		n++;
	 }
	 int i,j;
	 for(i=0;i<n;i++){
	 	for(j=i+1;j<n;j++){
	 		if(strcmp(a[i],a[j])==0){
	 			strcpy(a[j]," ");
			 }
		 }
	 	
	 }
	 for(i=0;i<n;i++){
	 	printf("%s ", a[i]);
	 }
 }
