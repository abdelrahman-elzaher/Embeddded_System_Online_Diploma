/*

   Created on: 2 Jun 2022
       Author: SEE TECH

hw2:
Ex4:

C program to take the number from user and check wether it is positive or negative or zero
##################
###########################

 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	float number1;
	printf("Enter a number: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&number1);
	fflush(stdin);
	fflush(stdout);
	if(number1>0)
		printf("%f is a positive number",number1);
	else if(number1<0)
		printf("%f is a negative number",number1);
	else
		printf("you entered zero");


	return 0;

}

