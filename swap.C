#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10,b=20,temp;
 clrscr();
	 printf("\nbefore Swapping \n a= %d\t b= %d",a,b);
	 temp = a;
	 a = b;
	 b = temp;

	 printf("\n\nAfter Swapping \n a= %d\t b= %d",a,b);
 getch();
 return(0);
}