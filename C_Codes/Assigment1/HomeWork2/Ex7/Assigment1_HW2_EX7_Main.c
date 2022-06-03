/*

   Created on: 2 Jun 2022
       Author: SEE TECH

hw2:
Ex7:
C programs to find Factorial of numbers

##################
###########################

 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int num1;
	printf("Enter a positive number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num1);
	fflush(stdin);
	fflush(stdout);

	if(num1<0)
		printf("Erorr !!! factorial of negative numbers doesn't Exist");
	else
	{
		int count=1,mul=1;
		for(count=1;count<=num1;count++)
			mul*=count;
		printf("Factorial =%d",mul);
	}

		return 0;

}

