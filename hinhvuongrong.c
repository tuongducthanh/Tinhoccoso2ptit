#include<stdio.h>

int main (){
	int canh;
	scanf("%d", &canh);
	int i,j;
	for(i=1;i<=canh;i++){
		if(i==1 || i== canh)
		{
			for(j=1;j<=canh; j++){
				
				printf("*");
			}
		}
		else
		{
			for(j=1; j<=canh; j++){
				if(j==1 || j==canh){
					printf("*");
				}
				else printf(".");
			}
		}
		printf("\n");
	}
}
