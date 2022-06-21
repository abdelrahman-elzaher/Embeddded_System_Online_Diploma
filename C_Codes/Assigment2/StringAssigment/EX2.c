
/*
C program to Find the Length of a string
 */

#include "stdio.h"
#include "stdlib.h"

int main()
{
	char MyString[200];
	int TheLength;
	printf("Enter a String:");
	fflush(stdout);
	gets(MyString);
	fflush(stdin);
	for(TheLength=0;MyString[TheLength]!='\0';TheLength++);
	printf("Length of string: %d",TheLength);

}

