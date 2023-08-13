#include<stdio.h>

int main(){
	int n;scanf("%d",&n);
	int a[n],i,b[1000]={};
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	for(i=0;i<n;i++){
		if(b[a[i]]>0){
			printf("%d %d\n", a[i], b[a[i]]);
			b[a[i]]=0;
		}
	}
}
