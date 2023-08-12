#include<stdio.h>


int checktn(int n){
	int k=n,res=0;
	while(n>0){
		res=res*10+ n%10;
		n/=10;
	}
	if(res==k) return 1;
	else return 0;
}
int check9(int n){
	while(n>0){
		if(n%10==9) return 0;
		n/=10;
	}
	return 1;
}
int main(){
	int n;scanf("%d", &n);
	int i,count=0;
	for(i=2;i<n;i++){
		if(checktn(i)&&check9(i)) {
		printf("%d ",i);
		count ++;
	}
		}
	printf("\n");
	printf("%d", count);
}
