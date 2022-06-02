/*

   Created on: 2 Jun 2022
       Author: SEE TECH


EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
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
	b=a+b;
	a=b-a;
	b=b-a;
	printf("after swapping, value of a= %d \n",a);
	printf("after swapping, value of b= %d \n",b);
	printf("\n###########################");
	return 0;

}

