#include<stdio.h>

int main(){
	int t;scanf("%d", &t);
	while(t--){
	int n;scanf("%d", &n);
	int i,newdigit=1;
	for(i=2;i<=n;i++){
		if(n%i==0){
			newdigit*=i;
			while(n%i==0){
				n/=i;
			}
		}
	}
	printf("%d\n", newdigit);
	}

}
