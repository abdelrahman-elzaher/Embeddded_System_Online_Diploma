
/*
 	 C program to insert elements
 */

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int MyArr[100];
	int NumberOfElements;
	int i=0;
	int InsertedNumber;
	int InsertedLocation;
	printf("Enter no of elements:");
	fflush(stdout);
	scanf("%d",&NumberOfElements);
	fflush(stdin);
	printf("Enter elements of matrix\n");
	for(i=0;i<NumberOfElements;i++)
	{
			scanf("%d",&MyArr[i]);
	}
	printf("Enter elements to be inserted: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&InsertedNumber);
	fflush(stdin);
	printf("Enter the location:  \n");
	fflush(stdout);
	scanf("%d",&InsertedLocation);
	fflush(stdin);
	for(i=NumberOfElements;i>InsertedLocation;i--)
		MyArr[i]=MyArr[i-1];
	MyArr[InsertedLocation]=InsertedNumber;
	NumberOfElements=NumberOfElements+1;
	for(i=0;i<NumberOfElements;i++)
		printf("%d ",MyArr[i]);


}

