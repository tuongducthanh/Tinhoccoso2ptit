#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int  n;
		scanf("%d", &n);
		 int i;
		 int count=0;
		for(i=1; i<=sqrt(n);i++){
			if(n%i==0){
				int k=i;
				
				if(i%2==0) count++;
				if((n/i)%2==0) count++;
				if (i * i == n && i % 2 == 0)
                    count = count- 1;
			}
		}
		printf("%d\n",count);
	}
}
