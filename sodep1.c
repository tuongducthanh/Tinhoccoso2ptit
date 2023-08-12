#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool checknt(int n){
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int Fy(int n){
	int a=1,b=1;
	while(b<n){
		int m=b;
		b+=a;
		a=m;
	}
	if(b==n) return 1;
	else return 0;
}
bool checksum(int n){
	int count=0;int k=n;
	while(n>0){
		count =count +(n%10);
		n/=10;
	}
	if(Fy(count)) return 1;
	else return 0;
}

int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	int i;
	if(b>a){
		for(i=a; i<=b;i++){
			if(checknt(i) ==1 && checksum(i)==1) printf("%d ", i);
		}
	}
	else{
			for(i=b; i<=a;i++){
			if(checknt(i) ==1 && checksum(i)==1) printf("%d ", i);
		}
	}
}
