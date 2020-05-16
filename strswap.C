//Program to swap two strings using libraries.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{    char str1[20],str2[20],temp[20];
 clrscr();
	printf("\n Enter First String :");
	gets(str1);

	printf("\n Enter Secong String :");
	gets(str2);

	printf("\nBefore Swapping :");
	printf("\nFirst String : %s",str1);
	printf("\nSecond String : %s",str2);


	strcpy(temp,str1);
	strcpy(str1,str2);
	strcpy(str2,temp);

	printf("\n\nAfter Swapping :");
	printf("\nFirst String : %s",str1);
	printf("\nSecong String : %s",str2);

 getch();
}