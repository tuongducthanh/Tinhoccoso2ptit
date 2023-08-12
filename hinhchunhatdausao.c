#include<stdio.h>

int main (){
	int dai,rong;
	scanf("%d %d", &dai,&rong);
	int i,j;
	for(i=1;i<=rong;i++){
		if(i==1 || i== rong)
		{
			for(j=1;j<=dai; j++){
				
				printf("*");
			}
		}
		else
		{
			for(j=1; j<=dai; j++){
				if(j==1 || j==dai){
					printf("*");
				}
				else printf(" ");
			}
		}
		printf("\n");
	}
}
