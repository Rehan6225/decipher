#include<stdio.h>
int main()
{
	int n;
	printf("\t\t\t\t\t\tDenomination\n");
	printf("Enter Amount:");
	scanf("%d",&n);
	while(n>10)
	{   
		printf("500: %d",n/500);
		printf("\n");
		n=n%500;
		printf("100: %d",n/100);
		printf("\n");
		n=n%100;
		printf("50 : %d",n/50);
		printf("\n");
		n=n%50;
		printf("10 : %d",n/10);
		printf("\n");
		n=n%10;
	
	
		
	}
	printf("x-x-x-x-x-x-x-x-x-x-x-x");
	
	return 0;
}
