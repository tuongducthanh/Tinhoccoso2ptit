#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int giaithua(int n){
	int i,gt=1;
	for(i=1; i<=n;i++){
		gt*=i;
	}
	return gt;
}
int main(){
	int n; scanf("%d", &n);
	int i,j;
	for(i=0; i<n;i++){
		for(j=0; j<=i; j++){
			if(i==0 && i==1) printf("1 ");
			else{
				printf("%d ", giaithua(i)/(giaithua(j)*giaithua(i-j)));
			}
		}
		printf("\n");
	}
}
