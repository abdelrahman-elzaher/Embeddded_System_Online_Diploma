
/*
 	 C program to search elements
 */

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int MyArr[100];
	int NumberOfElements;
	int i=0;
	int SearchedNumber;
	int flag=0;
	printf("Enter no of elements:");
	fflush(stdout);
	scanf("%d",&NumberOfElements);
	fflush(stdin);
	for(i=0;i<NumberOfElements;i++)
		scanf("%d",&MyArr[i]);

	printf("Enter element to be searched :");
	fflush(stdout);
	scanf("%d",&SearchedNumber);
	for(i=0;i<NumberOfElements;i++)
	{
		if(MyArr[i]==SearchedNumber)
		{
			printf("number found in location= %d",i+1);
			flag=1;
		}
	}
	if(flag==0)
		printf("number isn't exist in the array");

}

