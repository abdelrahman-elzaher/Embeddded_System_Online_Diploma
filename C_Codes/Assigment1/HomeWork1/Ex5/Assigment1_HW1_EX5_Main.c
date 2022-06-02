/*

   Created on: 2 Jun 2022
       Author: SEE TECH


EX5:

Write C Program to Find ASCII Value of a Character

#########Console_output######
Enter a character: G
ASCII value of G = 71
#############################

 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	char alphapet;
	printf("##########Console-output###\n");
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&alphapet);
	fflush(stdin);
	fflush(stdout);
	printf("ASCI value of G= %d\n",alphapet);
	printf("\n###########################");
	return 0;

}

