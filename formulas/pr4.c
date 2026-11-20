#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to find area of triangle.
	
	int base;
	int height;
	
	printf("Enter base :");
	scanf("%d",&base);
	
	printf("Enter height:");
	scanf("%d",&height);
	
	int area = 1/2 * base * height ;
	
	printf(" area = %d",area);
	
}
