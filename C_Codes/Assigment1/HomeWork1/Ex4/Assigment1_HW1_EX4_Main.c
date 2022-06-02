/*

   Created on: 2 Jun 2022
       Author: SEE TECH


EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

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
	float Variable1,Variable2;
	printf("##########Console-output###\n");
	printf("Enter two Real Numbers: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f",&Variable1,&Variable2);
	fflush(stdin);
	fflush(stdout);
	printf("Sum : %f\n",Variable1*Variable2);
	printf("\n###########################");
	return 0;

}

