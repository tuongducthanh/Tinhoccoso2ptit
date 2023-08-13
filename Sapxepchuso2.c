#include<stdio.h>

int main(){
	int t;scanf("%d", &t);
	while(t--){
		long long n;scanf("%lld", &n);
		long long a[1000]={},i=0,count=0;
		while(n>0){
			a[i]=(n%10);
			n/=10;
			i++;
			count++;
		}
		long long j,k,temp;
		for(j=0;j<count;j++){
			for(k=j+1; k<count;k++){
				if(a[j]>a[k]){
					temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
		}
		int dem=0;	
		for(j=0;j<count;j++){
			if(a[j]==0 && dem==0){
				continue;
			}
			else{
			printf("%lld", a[j]);
			dem++;	
			}
			
		}	
		
		printf("\n");
	}
}
