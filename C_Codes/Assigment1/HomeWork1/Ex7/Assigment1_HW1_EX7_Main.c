/*

   Created on: 2 Jun 2022
       Author: SEE TECH


EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.

#############################


 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	int a,b;
	printf("##########Console-output###\n");
	printf("Enter value of a: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&a);
	printf("Enter value of b: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&b);
	b=a^b;
	a=a^b;
	b=a^b;
	printf("after swapping, value of a= %d \n",a);
	printf("after swapping, value of b= %d \n",b);
	printf("\n###########################");
	return 0;

}

