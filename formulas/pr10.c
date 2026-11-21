#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to convert second into hh:mm:ss.
	
	int second, hh , mm , ss;
	
	printf("Enter  second:");
	scanf("%d",&second);
	
	hh = second / 3600 ;
	mm = (second % 3600 ) /60 ;
	ss = second %60 ;
	
	printf("%02d:%02d:%02d\n", hh, mm, ss);
}
