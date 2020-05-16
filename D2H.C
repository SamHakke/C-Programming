//Convert the decimal number to hexadecimal.
#include<stdio.h>
#include<conio.h>
void main()
{    int num=26,i,temp;
     char hex[10];
 clrscr();
       for(i=0;num>0;i++)
       { 
	 temp=num%16;
		if(temp<10)
		{
		     hex[i]=temp+48;
		}
		else
		{
		     hex[i]=temp+55;
		}
	  num=num/16;
       }

       printf("\n Octal Equivalent is : ");
       for(i=i-1;i>=0;i--)
       {
		printf("%c",hex[i]);
       }
 getch();
}
