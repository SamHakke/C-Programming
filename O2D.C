//Convert the Octal number to decimal number.
#include<stdio.h>
#include<conio.h>
void main()
{    int num=67,dec=0,base=1,temp;

 clrscr();
	temp=num;
	while(temp!=0)
	{
	 int l_digit=temp%10;
	 temp=temp/10;

	 dec+=l_digit*base;
	 base=base*8;
	}

	printf("Decimal Equivalent : %d ",dec);
 getch();
}
