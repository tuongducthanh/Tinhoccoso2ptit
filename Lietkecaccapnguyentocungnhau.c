#include<stdio.h>

int UCLN(int a, int b){
	if(b==0) return a;
	else return UCLN(b,a%b);
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j;
	for(i=a; i<=b; i++){
		for(j=i+1; j<=b;j++){
			if(i!=j &&UCLN(i,j)==1) printf("(%d,%d)\n", i,j);
		}
		
	}
	
}
