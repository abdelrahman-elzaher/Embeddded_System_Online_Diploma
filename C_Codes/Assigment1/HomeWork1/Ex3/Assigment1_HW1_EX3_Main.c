/*

   Created on: 2 Jun 2022
       Author: SEE TECH


EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################

 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int Variable1,Variable2;
	printf("##########Console-output###\n");
	printf("Enter two integer: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&Variable1,&Variable2);
	fflush(stdin);
	fflush(stdout);
	printf("Sum :%d",Variable1+Variable2);
	return 0;

}

