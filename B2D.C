//Convert the Binary number to decimal number.
#include<stdio.h>
#include<conio.h>
void main()
{    int num=111,dec=0,base=1,temp;

 clrscr();

	while(num>0)
	{
	 temp=num%10;
	 dec=dec+temp*base;
	 num=num/10;
	 base=base*2;
	}

	printf("Decimal Equivalent : %d ",dec);

 getch();
}