//Convert the Octal number to decimal number.
#include<stdio.h>
#include<conio.h>
void main()
{    int num=67,oct=0,base=1,temp;

 clrscr();
	temp=num;
	while(temp!=0)
	{
	 int l_digit=temp%10;
	 temp=temp/10;

	 oct+=l_digit*base;
	 base=base*8;
	}

	printf("Octal Equivalent : %d ",oct);

 getch();
}