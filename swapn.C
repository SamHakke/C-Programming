//Program to swap two variables without using third variable
#include<stdio.h>
#include<conio.h>

void main()
{    int a=10,b=20;
 clrscr();
     printf("\nBefore Swapping \n a = %d \tb = %d",a,b);

     //swapping logic
     a=a+b;
     b=a-b;
     a=a-b;

     printf("\nAfter Swapping \n a = %d \tb = %d",a,b);
 getch();
}