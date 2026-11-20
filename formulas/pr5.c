#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to find area of simple interest.
	
	
	int p;
	int r;
	int t;
	
	printf("Enter p :");
	scanf("%d",&p);
	
	printf("Enter r :");
	scanf("%d",&r);
	
	printf("Enter t :");
	scanf("%d",&t);
	
	int simple_interest =  p * r * t /100;
	
	printf("simple_interest = %d", simple_interest);
}
