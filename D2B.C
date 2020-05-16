//Convert the decimal number to binary.
#include<stdio.h>
#include<conio.h>
void main()
{    int num=7,a[10],i;
 clrscr();
       for(i=0;num>0;i++)
       {
	  a[i]=num%2;
	  num=num/2;
       }

       printf("\n Binary Equivalent is :");
       for(i=i-1;i>=0;i--)
       {
		printf(" %d",a[i]);
       }
 getch();
}