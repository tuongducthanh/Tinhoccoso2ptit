#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int a[100],b[100],c[100];
	int i;
	for(i=0; i<n;i ++){
		scanf("%d", &a[i]);
	}
	int j=0,k=0,l;
	for(i=0; i<n; i++){
		if(a[i]% 2==0) {
			b[j]=a[i];
			j++;
		}
		else {
			c[k]=a[i];
			k++;
		}
	}
		for(l=0;l<j; l++){
			printf("%d ", b[l]);
		}
		printf("\n");
		for(l=0;l<k; l++){
			printf("%d ", c[l]);
		}
	
}
