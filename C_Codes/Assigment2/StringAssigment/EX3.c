
/*
C program to Reverse String without using Library functions
 */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main()
{
	char MyString[200];
	int i=0;
	int TheLength;
	printf("Enter a String:");
	fflush(stdout);
	gets(MyString);
	fflush(stdin);
	TheLength=strlen(MyString);
	printf("the length is %d",TheLength);
	for(i=0;i<TheLength/2;i++)
	{
		MyString[i]=MyString[TheLength-i-1]^MyString[i];
		MyString[TheLength-i-1]=MyString[i]^MyString[TheLength-i-1];
		MyString[i]=MyString[i]^MyString[TheLength-i-1];
	}
	printf("Reverse string is %s",MyString);

}

