#include<stdio.h>
int min(int a,int b){
	return a<b? a:b;
}
int main(){
	int n,m;scanf("%d %d",&n,&m);
	int i,j;
		for(i=1;i<=n;i++){
		int unit =min(i,m);
		for(j=1;j<=m;j++){
			if(j<=m-i+1) printf("%c", 64+unit+j-1);
			else
			{	if(m<i) printf("%c", 64+unit--);
				else printf("%c", 64+(--unit));
			} 
		}
		printf("\n");
	}
}

