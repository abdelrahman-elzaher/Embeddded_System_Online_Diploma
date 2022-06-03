/*

   Created on: 2 Jun 2022
       Author: SEE TECH

hw2:
Ex2:

C progrem to check Vowel Or constants

##################
###########################

 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	char alphapet;
	printf("##########Console-output###\n");
	printf("Enter an alphapet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&alphapet);
	fflush(stdin);
	fflush(stdout);
	//at first check if it is an alphapet or not
	if((alphapet>=65 && alphapet<=90) || (alphapet>=97 && alphapet<=122))
	{
		//then check if it a vowel or not
		switch(alphapet)
		{
		case 'i':
		case 'I':
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'o':
		case 'O':
			printf("%c is a vowel",alphapet);
			break;
		default:
			printf("%c is a consonant",alphapet);
		}
	}

	else
		printf("%c is not an alphapet ",alphapet);

	printf("\n###########################");
	return 0;

}

