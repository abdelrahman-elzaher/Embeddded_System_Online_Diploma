/*
 * main.c
 *
 *  Created on: 3 Jun 2022
 *      Author: SEE TECH
 */
#include "stdio.h"
#include "stdlib.h"
/*
 * This program takes n numbers of elemnents user(where,n is specified by user)
 * stored data in an array and calculates the average of those numbers 
 *
 *
 * */
int main()
{
	int MyNumbers=0;
	float MyArr[100];
	float MyAverage=0;
	int i=0;
	printf("enter the numbers  of data \n");
	fflush(stdout);
	scanf("%d",&MyNumbers);
	fflush(stdin);
	for(i=0;i<MyNumbers;i++)   //Enter The first matrix
		{
			printf("Enter Number:");
			fflush(stdout);
			scanf("%f",&MyArr[i]);
			fflush(stdin);
			MyAverage+=MyArr[i];
		}
	MyAverage=MyAverage/MyNumbers;
	printf("Average %f",MyAverage);

}

