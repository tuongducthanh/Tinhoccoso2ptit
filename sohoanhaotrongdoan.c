#include<stdbool.h>
#include<math.h>

bool checkhh(int n){
	int i,sum=1;
	for(i=2; i<=sqrt(n);i++){
		if(n%i==0){
			if(i!= (n/i))
			sum=sum+i+n/i;
			else sum+=i;
		}
	}
	if(sum==n) return 1;
	else return 0;
}
int main(){
	int a,b;scanf("%d %d",&a,&b);
	int i;
	if(b>=a){
		for(i=a; i<=b;i++){
		if(checkhh(i)&& i!=1)
		printf("%d ", i);
	}
	}
	else{
		for(i=b; i<=a;i++){
		if(checkhh(i)&& i!=1)
		printf("%d ",i);
	}
	
}}
