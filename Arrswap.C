//Program to swap two arrays using third array.
#include<stdio.h>
#include<conio.h>

void main()
{    int temp[5],i;
     int arr1[5]={1,2,3,4,5};
     int arr2[5]={10,20,30,40,50};
      clrscr();
      printf("\n Before Swapping First Array :");
      for(i=0;i<5;i++)
      {
	printf("%d ",arr1[i]);
      }

      printf("\n Before Swapping Second Array :");
      for(i=0;i<5;i++)
      {
	printf("%d ",arr2[i]);
      }

      //Swapping Logic
      for(i=0;i<5;i++)
      {
	temp[i]=arr1[i];
	arr1[i]=arr2[i];
	arr2[i]=temp[i];
      }

      printf("\n\n After Swapping First Array :");
      for(i=0;i<5;i++)
      {
	printf("%d ",arr1[i]);
      }

      printf("\n After Swapping Second Array :");
      for(i=0;i<5;i++)
      {
	printf("%d ",arr2[i]);
      }
 getch();
}