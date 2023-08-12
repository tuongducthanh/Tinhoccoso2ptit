#include<stdio.h>
#include<math.h>

int Fy(int n){
	if(n==1) return 0;
	else if(n==2||n==3) return 1;
	else return Fy(n-1)+Fy(n-2);
}
int main(){
	int n; scanf("%d", &n);
	int i;
	for(i=1; i<=n; i++){
		printf("%d ", Fy(i));
	}
}
