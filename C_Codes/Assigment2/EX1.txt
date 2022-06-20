/*
 * main.c
 *
 *  Created on: 3 Jun 2022
 *      Author: SEE TECH
 */
#include "stdio.h"
#include "stdlib.h"
/*
 * finding the sum of two matrix of order 2*2 using multidimensioal arrays
	where elements of matrix are entered by user
 *
 *
 * */
#define Size1 2
#define Size2 2



int main()
{
	float MyArr[Size1][Size2];
	float MyArr2[Size1][Size2];
	float MySum[Size1][Size2];

	int i=0,j=0;
	printf("enter the elements of 1st matrix \n");
	fflush(stdout);
	for(i=0;i<2;i++)   //Enter The first matrix
		{

			for(j=0;j<2;j++)
			{
				printf("Entera%d%d\n",i+1,j+1);
				fflush(stdout);
				scanf("%f",&MyArr[i][j]);
				fflush(stdin);
				fflush(stdout);
			}
		}
	printf("Enter the Elements of 2st Matrix\n");
	fflush(stdout);
	for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("Enterb%d%d\n",i+1,j+1);
				fflush(stdout);
				scanf("%f",&MyArr2[i][j]);
				fflush(stdin);
				fflush(stdout);
				MySum[i][j]=MyArr[i][j]+MyArr2[i][j]; //summing the two matrixes
			}
		}
	printf("Sum Of Matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f\t",MySum[i][j]);
		}
		printf("\n");

	}


}

