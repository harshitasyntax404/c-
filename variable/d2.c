#include<stdio.h>
#include<conio.h>

void main()
{
	// 1. swaping of two variables.
	
	int a = 50;
	int b = 100;
	int q = a;
	
	printf("a =%d\n",a);
	printf("b =%d\n",b);
	
	// 2. swaping of two variables without using third variable.
	
	int c = 20;
	int d = 40;
	
	c = c + d ;
	d = c - d;
	c = c - d;
	
	
	printf("c =%d\n",c);
	printf("d =%d\n",d);

	
	// 3. swaping of two variables without using third variable and without using -&=.
	
	int h = 20;
	int m = 80;
	
	h = h * m ;
	m = h / m ;
	h = h / m ;
	
	printf("h =%d\n",h);
	printf("m =%d\n",m);
}
