/*

   Created on: 2 Jun 2022
       Author: SEE TECH

hw2:
Ex5:

C progrem to take a character from user and check if it an alphapet or not

##################
###########################

 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	char alphapet;
	printf("Enter an alphapet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&alphapet);
	fflush(stdin);
	fflush(stdout);
	//at first check if it is an alphapet or not
	if((alphapet>=65 && alphapet<=90) || (alphapet>=97 && alphapet<=122))
		printf("%c is an alphapet",alphapet);

	else
		printf("%c is not an alphapet ",alphapet);

	return 0;

}

