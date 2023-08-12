#include<stdio.h> 
#include<math.h> 
int check(int n){
	int i;
	i=sqrt(n);
	if(i*i==n) return n;
	else return 0;
}

int main(){
	int m,n;
	scanf("%d %d", &m,&n);
	int i, count=0;
	for(i=(int)sqrt(m);i<=(int)sqrt(n); i++){
		if(check(i*i)&& i*i>=m && i*i<=n)
		count++;
	}
	printf("%d\n", count);
	for(i=(int)sqrt(m);i<=(int)sqrt(n);i++){
		if(check(i*i)&& i*i>=m && i*i<=n)
		printf("%d\n",i*i);
	}
	return 0;
}
