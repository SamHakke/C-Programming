//Swap two string using pointer.
#include<stdio.h>
#include<conio.h>
void main()
{
   char* s1="Sameer";
   char* s2="Hakke";
 clrscr();

   printf("\nBefore Swapping: s1= %s\t s2= %s",s1,s2);

   //Swapping Logic
   s1=(char*)((int)s1+(int)s2);
   s2=(char*)((int)s1-(int)s2);
   s1=(char*)((int)s1-(int)s2);

   printf("\nAfter Swapping: s1= %s\t s2= %s",s1,s2);

 getch();
}