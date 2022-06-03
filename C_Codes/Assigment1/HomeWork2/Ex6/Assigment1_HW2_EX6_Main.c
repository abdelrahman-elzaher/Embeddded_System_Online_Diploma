/*

   Created on: 2 Jun 2022
       Author: SEE TECH

hw2:
Ex6:
C programs to calcualate sum of natural numbers

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
		printf("you entered a negative number");
	else
	{
		int count=1,sum=0;
		for(count=1;count<=num1;count++)
			sum+=count;
		printf("sum =%d",sum);
	}

		return 0;

}

