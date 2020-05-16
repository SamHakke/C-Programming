//Convert the decimal number to octal.
#include<stdio.h>
#include<conio.h>
void main()
{    int num=78,a[10],i;
 clrscr();
       for(i=0;num>0;i++)
       {
	  a[i]=num%8;
	  num=num/8;
       }

       printf("\n Octal Equivalent is : ");
       for(i=i-1;i>=0;i--)
       {
		printf("%d",a[i]);
       }
 getch();
}