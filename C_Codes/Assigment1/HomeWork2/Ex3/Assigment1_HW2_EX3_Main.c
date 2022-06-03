/*

   Created on: 2 Jun 2022
       Author: SEE TECH

hw2:
Ex3:

C program to find the largest number Among Three numbers
##################
###########################

 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	float number1,number2,number3;
	float max;
	printf("##########Console-output###\n");
	printf("Enter three numbers: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f%f",&number1,&number2,&number3);
	fflush(stdin);
	fflush(stdout);
	max=number1;
	if(max<number2)
		max=number2;
	if(max<number3)
		max=number3;
	printf("the largest number is %f",max);

		printf("\n###########################");
	return 0;

}

