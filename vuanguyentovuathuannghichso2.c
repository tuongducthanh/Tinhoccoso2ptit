#include<stdio.h>
#include<stdbool.h>
#include<math.h>
 bool checknt(int n){
 	int i;
 	for(i=2; i<=sqrt(n);i++){
 		if(n%i==0) return 0;
	 }
	 return n>1;
 }
bool checkinv(int n){
 	int k =0,p=n;
 	while(n>0){
 		k =k*10 +n%10;
 		n/=10;
	 }
	 if(k==p) return 1;
	 else return 0;
 }
 int main()
 {
 	int t;scanf("%d", &t);
 	while(t--){
 	int a,b; scanf("%d %d", &a,&b);
 	int count =0;
 	if(a>10 && b> a){
 		int i,j;
 		for(i=a; i<=b;i++){
 			if((checknt(i)==1) && (checkinv(i)==1)){
 				printf("%d ", i);
 				count++;
 				if(count%10==0) printf("\n");
			 }
 			
		 }
		 
	 }
 	printf("\n\n");
	 }
 	
 }
