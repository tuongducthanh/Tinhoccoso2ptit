#include<stdio.h>

int main(){
	int t;scanf("%d", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		int a[1000]={},i=0,count=0;
		while(n>0){
			a[i]=(n%10);
			n/=10;
			i++;
			count++;
		}
		int j,k,temp;
		for(j=0;j<count;j++){
			for(k=j+1; k<count;k++){
				if(a[j]>a[k]){
					temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
		}
		for(j=0;j<count;j++){
			printf("%d", a[j]);
		}
		printf("\n");
	}
}
