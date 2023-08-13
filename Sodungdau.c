#include<stdio.h>
void nhapmang(int a[], int n){
		int i;
			for(i=0;i<n;i++){
		    scanf("%d",&a[i]);
	}
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;scanf("%d",&n);
		int a[n],b[n],index=1;
		nhapmang(a,n);
		int res =a[n-1] ; 
		b[0]=a[n-1];
		int i;
		for(i=n-2;i>=0;i--){
			if(a[i]>res){
				res=a[i];
				b[index]=a[i];
				index++;
			}
		}
		for(i=index -1;i>=0;i--){
			printf("%d ", b[i]);
		}
		printf("\n");
	}
}

