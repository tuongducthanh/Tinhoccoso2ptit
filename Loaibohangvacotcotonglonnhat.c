#include<stdio.h>

void nhapmang(int a[][11], int n, int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
}
int main(){
	int t;scanf("%d", &t);
	int k;
	for(k=1;k<=t;k++){
		int n,m;scanf("%d%d", &n,&m);
		int a[n][m];
		nhapmang(a,n,m);
		int i,j,res=0,hang,cot;
		for(i=0;i<n;i++){
			int sum1=0;
			for(j=0;j<m;j++){
				sum1+=a[i][j];
			}
			if(res<sum1) {
				res=sum1;
				hang=i;
			}
		}
		res=0;
		for(i=0;i<m;i++){
			int sum2=0;
			for(j=0;j<n;j++){
				if(j!=hang ) sum2+=a[j][i];
			}
			if(res<sum2) {
				res=sum2;
				cot=j;
			}
		}
		printf("Test %d:\n", k);
		for(i=0;i<n;i++){
			if(i!=hang){
				for(j=0;j<n;j++){
					if(j!= cot){
						printf("%d ", a[i][j]);
					}
				}
			}
			printf("\n");
		}
	}
}
