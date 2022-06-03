/*

   Created on: 2 Jun 2022
       Author: SEE TECH

hw2:
EX1:

Write a c program to check whether the number is odd or even

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000

###########################

 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int Variable1;
	printf("##########Console-output###\n");
	printf("Enter Integer number: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&Variable1);
	fflush(stdin);
	fflush(stdout);

	if((Variable1%2)==0)
		printf("the number %d is even",Variable1);
	else
		printf("the number %d is odd",Variable1);

	printf("\n###########################");
	return 0;

}

