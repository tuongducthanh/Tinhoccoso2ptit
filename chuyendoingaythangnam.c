#include<stdio.h>

int main(){
	int day;
	scanf("%d", &day);
	int year,week, daylast;
	year=day/365;
	day%=365;
	week=day/7;
	daylast=day%7;
	printf("%d %d %d", year, week,daylast);
	return 0;
}
