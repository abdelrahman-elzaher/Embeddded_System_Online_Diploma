/*
 * main.c
 *
 *  Created on: 3 Jun 2022
 *      Author: SEE TECH
 */
#include "stdio.h"
#include "stdlib.h"

int main()
{
	float num1,num2;
	float myresult=0;
	char op;
	printf("Enter operator either + or - or * or /  :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&op);
	fflush(stdin);
	fflush(stdout);
	printf("Enter two operands : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f",&num1,&num2);
	switch(op) //will make the calculation based on operation
	{
		case '-':
			myresult=num1-num2;
			break;
		case '+':
			myresult=num1+num2;
			break;
		case '*':
			myresult=num1*num2;
			break;
		case '/':
			if(num2==0)
				break;
			myresult=num1/num2;
			break;
		default:
			printf("you entered false operation");

		}
	if(num2==0 && op=='/') //divison with zero in the lower position
		printf("you have entered zero for number2 with / operation\n so the result will be inf");
	else
		printf("my result is %f",myresult); //printing the result
}

