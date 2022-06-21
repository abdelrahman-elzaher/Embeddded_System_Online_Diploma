
/*
 * Program to find Transpose of Matrix
 * This program asks user to enter a matrix(size of matrix is specified by user ) and this  programs find the transpose of that matrix
 * 	displays it
 *
 */

#include "stdio.h"
#include "stdlib.h"

int main()
{
	int MyArr[50][50];
	int MyRows=0;
	int MyColumns=0;
	int i=0,j=0;
	printf("Enter rows and coloumns of matrix:");
	fflush(stdout);
	scanf("%d %d",&MyRows,&MyColumns);
	fflush(stdin);
	printf("Enter elements of matrix\n");
	for(i=0;i<MyRows;i++)
	{
		for(j=0;j<MyColumns;j++)
		{
			printf("Enter elements a%d%d :",i+1,j+1);
			fflush(stdout);
			scanf("%d",&MyArr[i][j]);
			fflush(stdin);

		}
	}


	//display the array before transvese
	for(i=0;i<MyRows;i++)
	{
		for(j=0;j<MyColumns;j++)
		{
			printf("%d\t",MyArr[i][j]);
			fflush(stdout);
		}
		printf("\n");
	}
	printf("\nTranspose of Matrix\n");
	for(i=0;i<MyColumns;i++)
	{
		for(j=0;j<MyRows;j++)
		{
			printf("%d\t",MyArr[j][i]);
			fflush(stdout);
		}
		printf("\n");
	}

}

