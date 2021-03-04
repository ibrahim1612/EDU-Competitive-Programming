#include <stdio.h>

int main() {
	int year;
	scanf("%d",&year);
	if(year%400==0)
		printf("TRUE");
	else if(year%100==0)
		printf("FALSE");
		else if(year%4==0)
printf("TRUE");
	else
	printf("FALSE");
	return 0;
}
