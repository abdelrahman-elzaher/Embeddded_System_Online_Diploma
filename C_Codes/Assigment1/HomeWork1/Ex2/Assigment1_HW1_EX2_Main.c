/*

   Created on: 2 Jun 2022
       Author: SEE TECH


EX2:

Write C Program to Print a Integer Entered by a User
i should see the Console as following:
##########Console-output###
Enter a integer: 25
You entered: 25
###########################

 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int Variable;
	printf("##########Console-output###\n");
	printf("Enter a integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&Variable);

	printf("You Entered: %d",Variable);
	return 0;

}

