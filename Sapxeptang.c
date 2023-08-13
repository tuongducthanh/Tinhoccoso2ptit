#include<stdio.h>

int main()
{
	int n;scanf("%d", &n);
	int i,j,a[n];
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	//ham swap theo thu tu giam dan
	int temp;
	for(i=0;i<n;i++){
        	for(j=i+1;j<n;j++){
        		if(a[i]>=a[j]){
        			temp=a[i];
					a[i]=a[j];
					a[j]=temp;	
				}
			}
		}
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
	}

