#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool check(int n){
	int i;
	for(i=2; i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
		
	}
	 return 1;
}
int check1(int n){ 
	while(n){ 
	int r = n % 10; 
	if(r != 2 && r != 3 && r != 5 && r != 7) 
	return 0; n = n / 10; 
	} 
	return 1;
 }
bool checkstep(int n){
	while(n>0){
		int i=(n%10);
		if(check(i)==0) {
		return 0;
		break;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	
	scanf("%d",&t);
	while(t--){
	int a,b;
	int sl=0;
	scanf("%d %d", &a,&b);
	int i;
	for(i=a;i<=b;i++){
		if(check(i)==1 && check1(i)==1 ){
			sl=sl+1;
		}
	}
	printf("%d\n", sl);	
	}
	
}
